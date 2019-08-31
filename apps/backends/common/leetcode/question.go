package leetcode

import (
	"encoding/json"
	"fmt"
	"strconv"

	"github.com/parnurzeal/gorequest"

	"github.com/6leetcode/6leetcode/apps/backends/common/table"
)

func (i *Instance) Question(titleSlug string) (err error) {
	var query = fmt.Sprintf(`{"operationName":"questionData","variables":{"titleSlug":"%s"},"query":"query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    langToValidPlayground\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    envInfo\n    __typename\n  }\n}\n"}`, titleSlug)

	var response gorequest.Response
	var errs []error
	var data []byte

	if response, data, errs = gorequest.New().
		Post("https://leetcode-cn.com/graphql").
		Set("origin", "https://leetcode-cn.com").
		Set("referer", "https://leetcode-cn.com/problemset/all/").
		Set("user-agent", user_agent).
		Set("x-csrftoken", i.csrftoken).
		AddCookies(i.cookie).
		Type("json").
		Send(query).EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	if response.Request.Response != nil {
		i.cookie = response.Request.Response.Cookies()
	}

	type body struct {
		Data struct {
			Question struct {
				Difficulty         string  `json:"difficulty"`
				IsPaidOnly         bool    `json:"isPaidOnly"`
				QuestionFrontendID string  `json:"questionFrontendId"`
				QuestionId         string  `json:"questionId"`
				Status             *string `json:"status"`
				Title              string  `json:"title"`
				TitleSlug          string  `json:"titleSlug"`
				Content            string  `json:"content"`
				TranslatedContent  string  `json:"translatedContent"`
			} `json:"question"`
		} `json:"data"`
	}

	var b body

	if err = json.Unmarshal(data, &b); err != nil {
		return
	}

	var qid, fqid int
	if qid, err = strconv.Atoi(b.Data.Question.QuestionId); err != nil {
		return
	}
	if fqid, err = strconv.Atoi(b.Data.Question.QuestionFrontendID); err != nil {
		return
	}

	var questionInfo = &table.QuestionInfo{
		QuestionID:         qid,
		FrontendQuestionID: fqid,
		Content:            []byte(b.Data.Question.Content),
		TranslatedContent:  []byte(b.Data.Question.TranslatedContent),
	}

	if err = questionInfo.Create(); err != nil {
		return
	}

	return
}
