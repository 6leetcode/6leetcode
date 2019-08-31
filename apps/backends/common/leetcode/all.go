package leetcode

import (
	"encoding/json"
	"fmt"

	"github.com/parnurzeal/gorequest"
	"github.com/tosone/logging"

	"github.com/6leetcode/6leetcode/apps/backends/common/table"
)

func (i *Instance) All() (err error) {
	var response gorequest.Response
	var errs []error

	var data []byte

	if response, data, errs = gorequest.New().
		Get("https://leetcode-cn.com/api/problems/all/").
		Set("accept", "application/json, text/javascript, */*; q=0.01").
		Set("content-type", "application/json").
		Set("referer", "https://leetcode-cn.com/problemset/all/").
		AddCookies(i.cookie).
		EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}
	if response.Request.Response != nil {
		i.cookie = response.Request.Response.Cookies()
	}

	type body struct {
		AcEasy          int    `json:"ac_easy"`
		AcHard          int    `json:"ac_hard"`
		AcMedium        int    `json:"ac_medium"`
		CategorySlug    string `json:"category_slug"`
		FrequencyHigh   int    `json:"frequency_high"`
		FrequencyMid    int    `json:"frequency_mid"`
		NumSolved       int    `json:"num_solved"`
		NumTotal        int    `json:"num_total"`
		StatStatusPairs []struct {
			Difficulty struct {
				Level int `json:"level"`
			} `json:"difficulty"`
			Frequency int  `json:"frequency"`
			IsFavor   bool `json:"is_favor"`
			PaidOnly  bool `json:"paid_only"`
			Progress  int  `json:"progress"`
			Stat      struct {
				FrontendQuestionID  int    `json:"frontend_question_id"`
				IsNewQuestion       bool   `json:"is_new_question"`
				QuestionArticleLive bool   `json:"question__article__live"`
				QuestionArticleSlug string `json:"question__article__slug"`
				QuestionHide        bool   `json:"question__hide"`
				QuestionTitle       string `json:"question__title"`
				QuestionTitleSlug   string `json:"question__title_slug"`
				QuestionID          int    `json:"question_id"`
				TotalAcs            int    `json:"total_acs"`
				TotalColumnArticles int    `json:"total_column_articles"`
				TotalSubmitted      int    `json:"total_submitted"`
			} `json:"stat"`
			Status *string `json:"status"`
		} `json:"stat_status_pairs"`
		UserName string `json:"user_name"`
	}

	var b body

	if err = json.Unmarshal(data, &b); err != nil {
		return
	}

	for _, question := range b.StatStatusPairs {
		var q = &table.Questions{
			QuestionID:         question.Stat.QuestionID,
			FrontendQuestionID: question.Stat.FrontendQuestionID,
			Difficulty:         question.Difficulty.Level,
			PaidOnly:           question.PaidOnly,
			Title:              question.Stat.QuestionTitle,
			TitleSlug:          question.Stat.QuestionTitleSlug,
			TotalAcs:           question.Stat.TotalAcs,
			TotalSubmitted:     question.Stat.TotalSubmitted,
		}
		if err := q.Create(); err != nil {
			logging.Error(err)
		}
	}

	fmt.Println(b)
	return
}
