package leetcode

import (
	"encoding/json"
	"fmt"
	"strconv"
	"strings"
	"sync"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
	"github.com/tosone/logging"

	"leet/common/table"
)

type AllQuestion struct {
	CategoryTitle      string  `json:"categoryTitle"`
	Difficulty         string  `json:"difficulty"`
	IsPaidOnly         bool    `json:"isPaidOnly"`
	QuestionFrontendID string  `json:"questionFrontendId"`
	QuestionId         string  `json:"questionId"`
	Status             *string `json:"status"`
	Title              string  `json:"title"`
	TitleSlug          string  `json:"titleSlug"`
	TranslatedTitle    string  `json:"translatedTitle"`
	Stats              string  `json:"stats"`
}

// All all
func (i *Instance) All(gen bool) (questions []table.Question, err error) {
	var data []byte
	var errs []error
	var response gorequest.Response
	if response, data, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post(fmt.Sprintf("%s/graphql", HostLeetcode)).
		Set("origin", HostLeetcode).
		Set("referer", fmt.Sprintf("%s/problemset/all/", HostLeetcode)).
		Set("user-agent", i.userAgent).
		Set("x-csrftoken", i.csrftoken).
		AddCookies(i.cookie).
		Type("json").
		Send(`{"operationName":"allQuestions","variables":{},"query":"query allQuestions {\n  allQuestions {\n    ...questionSummaryFields\n    __typename\n  }\n}\n\nfragment questionSummaryFields on QuestionNode {\n  title\n  titleSlug\n  translatedTitle\n  questionId\n  questionFrontendId\n  status\n  difficulty\n  isPaidOnly\n  categoryTitle\n stats\n  __typename\n}\n"}`).
		EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	if response.Request.Response != nil {
		i.cookie = response.Request.Response.Cookies()
	}

	type body struct {
		Data struct {
			AllQuestions []AllQuestion `json:"allQuestions"`
		} `json:"data"`
	}

	type QuestionStats struct {
		TotalAccepted      string `json:"totalAccepted"`
		TotalSubmission    string `json:"totalSubmission"`
		TotalAcceptedRaw   uint64 `json:"totalAcceptedRaw"`
		TotalSubmissionRaw uint64 `json:"totalSubmissionRaw"`
		ACRate             string `json:"acRate"`
	}

	var b body

	if err = json.Unmarshal(data, &b); err != nil {
		return
	}

	var waitGroup = new(sync.WaitGroup)

	for _, question := range b.Data.AllQuestions {
		var qid int
		if qid, err = strconv.Atoi(question.QuestionId); err != nil {
			logging.Error(err)
			continue
		}

		var questionStats QuestionStats
		if err = json.Unmarshal([]byte(question.Stats), &questionStats); err != nil {
			return
		}

		if strings.HasSuffix(question.Title, question.CategoryTitle) {
			question.Title = strings.TrimSuffix(question.Title, " "+question.CategoryTitle)
		}

		var q = &table.Question{
			QuestionID:         qid,
			QuestionFrontendID: question.QuestionFrontendID,
			Difficulty:         question.Difficulty,
			PaidOnly:           question.IsPaidOnly,
			Title:              question.Title,
			TitleSlug:          question.TitleSlug,
			TranslatedTitle:    question.TranslatedTitle,
			CategoryTitle:      question.CategoryTitle,
			TotalAccepted:      questionStats.TotalAccepted,
			TotalSubmission:    questionStats.TotalSubmission,
			TotalAcceptedRaw:   questionStats.TotalAcceptedRaw,
			TotalSubmissionRaw: questionStats.TotalSubmissionRaw,
			ACRate:             questionStats.ACRate,
		}

		questions = append(questions, *q)

		if !gen {
			// var err error
			if err = q.Create(); err != nil {
				logging.Error(err)
				err = nil // ignore this error
			}
			waitGroup.Add(1)
			go func(question AllQuestion) {
				defer waitGroup.Done()
				if err = i.Question(question.TitleSlug); err != nil {
					logging.Error(err)
					err = nil // ignore this error
				}
			}(question)
		}
	}
	waitGroup.Wait()
	return
}
