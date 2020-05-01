package leetcode

import (
	"encoding/json"
	"strconv"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
	"github.com/tosone/logging"

	"github.com/6leetcode/6leetcode/apps/backends/common/table"
)

func (i *Instance) All() (err error) {
	var response gorequest.Response
	var errs []error

	var data []byte

	if response, data, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post("https://leetcode-cn.com/graphql").
		Set("origin", "https://leetcode-cn.com").
		Set("referer", "https://leetcode-cn.com/problemset/all/").
		Set("user-agent", user_agent).
		Set("x-csrftoken", i.csrftoken).
		AddCookies(i.cookie).
		Type("json").
		Send(`{"operationName":"allQuestions","variables":{},"query":"query allQuestions {\n  allQuestions {\n    ...questionSummaryFields\n    __typename\n  }\n}\n\nfragment questionSummaryFields on QuestionNode {\n  title\n  titleSlug\n  translatedTitle\n  questionId\n  questionFrontendId\n  status\n  difficulty\n  isPaidOnly\n  categoryTitle\n  __typename\n}\n"}`).
		EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	if response.Request.Response != nil {
		i.cookie = response.Request.Response.Cookies()
	}

	type body struct {
		Data struct {
			AllQuestions []struct {
				CategoryTitle      string  `json:"categoryTitle"`
				Difficulty         string  `json:"difficulty"`
				IsPaidOnly         bool    `json:"isPaidOnly"`
				QuestionFrontendID string  `json:"questionFrontendId"`
				QuestionId         string  `json:"questionId"`
				Status             *string `json:"status"`
				Title              string  `json:"title"`
				TitleSlug          string  `json:"titleSlug"`
				TranslatedTitle    string  `json:"translatedTitle"`
			} `json:"allQuestions"`
		} `json:"data"`
	}

	var b body

	if err = json.Unmarshal(data, &b); err != nil {
		return
	}

	for _, question := range b.Data.AllQuestions {
		var qid, fqid int
		if qid, err = strconv.Atoi(question.QuestionId); err != nil {
			continue
		}
		if fqid, err = strconv.Atoi(question.QuestionFrontendID); err != nil {
			err = nil
			continue
		}
		var q = &table.Questions{
			QuestionID:         qid,
			FrontendQuestionID: fqid,
			Difficulty:         question.Difficulty,
			PaidOnly:           question.IsPaidOnly,
			Title:              question.Title,
			TitleSlug:          question.TitleSlug,
			TranslatedTitle:    question.TranslatedTitle,
			CategoryTitle:      question.CategoryTitle,
		}
		if err := q.Create(); err != nil {
			logging.Error(err)
		}
		if err := i.Question(question.TitleSlug, q); err != nil {
			logging.Error(err)
		}
	}

	return
}
