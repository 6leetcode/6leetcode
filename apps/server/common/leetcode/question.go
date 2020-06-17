package leetcode

import (
	"encoding/json"
	"fmt"
	"os"
	"strconv"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
	"github.com/unknwon/com"

	"6leetcode/common/table"
)

func (i *Instance) Question(titleSlug string, q *table.Question) (err error) {
	var query = fmt.Sprintf(`{"operationName":"questionData","variables":{"titleSlug":"%s"},"query":"query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    langToValidPlayground\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    envInfo\n    __typename\n  }\n}\n"}`, titleSlug)

	var response gorequest.Response
	var errs []error
	var data []byte

	if response, data, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post("https://leetcode-cn.com/graphql").
		Set("origin", "https://leetcode-cn.com").
		Set("referer", "https://leetcode-cn.com/problemset/all/").
		Set("user-agent", i.userAgent).
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
				BoundTopicID int `json:"boundTopicId"`
				CodeSnippets []struct {
					Code     string `json:"code"`
					Lang     string `json:"lang"`
					LangSlug string `json:"langSlug"`
				} `json:"codeSnippets"`
				Content               string  `json:"content"`
				Difficulty            string  `json:"difficulty"`
				IsPaidOnly            bool    `json:"isPaidOnly"`
				LangToValidPlayground string  `json:"langToValidPlayground"`
				QuestionFrontendID    string  `json:"questionFrontendId"`
				QuestionId            string  `json:"questionId"`
				SimilarQuestions      string  `json:"similarQuestions"`
				Stats                 string  `json:"stats"`
				Status                *string `json:"status"`
				Title                 string  `json:"title"`
				TitleSlug             string  `json:"titleSlug"`
				TopicTags             []struct {
					Name           string `json:"name"`
					Slug           string `json:"slug"`
					TranslatedName string `json:"translatedName"`
				} `json:"topicTags"`
				TranslatedContent string `json:"translatedContent"`
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

	var codeSnippets []byte
	if codeSnippets, err = json.Marshal(b.Data.Question.CodeSnippets); err != nil {
		return
	}

	var topicTags []byte
	if topicTags, err = json.Marshal(b.Data.Question.TopicTags); err != nil {
		return
	}

	var questionInfo = table.QuestionInfo{
		QuestionID:            qid,
		Question:              *q,
		FrontendQuestionID:    fqid,
		Content:               []byte(b.Data.Question.Content),
		TranslatedContent:     []byte(b.Data.Question.TranslatedContent),
		CodeSnippets:          codeSnippets,
		LangToValidPlayground: []byte(b.Data.Question.LangToValidPlayground),
		SimilarQuestions:      []byte(b.Data.Question.SimilarQuestions),
		Stats:                 []byte(b.Data.Question.Stats),
		TopicTags:             topicTags,
	}

	if err = questionInfo.Create(); err != nil {
		return
	}

	if err = q.Create(); err != nil {
		return
	}

	if viper.GetString("Generate.Readme") != "" {
		if err = i.readme(q, questionInfo, viper.GetString("Generate.Readme")); err != nil {
			return
		}
	}

	return
}

func (i *Instance) readme(q *table.Question, questionInfo table.QuestionInfo, basedir string) (err error) {
	var dir = fmt.Sprintf("%s/%s/%04d. %s", basedir, q.CategoryTitle, q.FrontendQuestionID, q.Title)
	if !com.IsDir(dir) {
		if err = os.MkdirAll(dir, 0755); err != nil {
			return
		}
	}
	if err = i.readmeEN(q, questionInfo, dir); err != nil {
		return
	}
	if err = i.readmeZH(q, questionInfo, dir); err != nil {
		return
	}
	if err = i.makefile(dir); err != nil {
		return
	}
	return
}

func (i *Instance) readmeEN(q *table.Question, questionInfo table.QuestionInfo, dir string) (err error) {
	var filename = dir + "/README.md"
	if com.IsFile(filename) {
		if err = os.Remove(filename); err != nil {
			return
		}
	}
	var file *os.File
	if file, err = os.Create(dir + "/README.md"); err != nil {
		return
	}
	if _, err = file.WriteString(fmt.Sprintf("### [%s](https://leetcode.com/problems/%s)\n\n", q.Title, q.TitleSlug)); err != nil {
		return
	}
	if _, err = file.Write(questionInfo.Content); err != nil {
		return
	}
	if err = file.Close(); err != nil {
		return
	}
	return
}

func (i *Instance) readmeZH(q *table.Question, questionInfo table.QuestionInfo, dir string) (err error) {
	var filename = dir + "/README_ZH.md"
	if com.IsFile(filename) {
		if err = os.Remove(filename); err != nil {
			return
		}
	}
	var file *os.File
	if file, err = os.Create(dir + "/README_ZH.md"); err != nil {
		return
	}
	if _, err = file.WriteString(fmt.Sprintf("### [%s](https://leetcode-cn.com/problems/%s)\n\n", q.TranslatedTitle, q.TitleSlug)); err != nil {
		return
	}
	if _, err = file.Write(questionInfo.TranslatedContent); err != nil {
		return
	}
	if err = file.Close(); err != nil {
		return
	}
	return
}

func (i *Instance) makefile(dir string) (err error) {
	var filename = dir + "/Makefile"
	if com.IsFile(filename) {
		if err = os.Remove(filename); err != nil {
			return
		}
	}
	var file *os.File
	if file, err = os.Create(dir + "/Makefile"); err != nil {
		return
	}
	if _, err = file.WriteString(fmt.Sprintf("%s\n", "include ../../../Makefile.rules")); err != nil {
		return
	}
	if err = file.Close(); err != nil {
		return
	}
	return
}
