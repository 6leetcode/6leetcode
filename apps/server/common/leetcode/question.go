package leetcode

import (
	"encoding/json"
	"fmt"
	"os"
	"strconv"
	"sync"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"github.com/unknwon/com"

	"6leetcode/common/table"
)

var locker sync.Mutex

const maxWorker = 8

var worker = 0

// Question question
func (i *Instance) Question(titleSlug string) (err error) {
	if worker < maxWorker {
		worker++
	} else {
		locker.Lock()
		defer locker.Unlock()
		defer func() { worker-- }()
	}

	var query = fmt.Sprintf(`{"operationName":"questionData","variables":{"titleSlug":"%s"},"query":"query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    langToValidPlayground\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    envInfo\n    __typename\n  }\n}\n"}`, titleSlug)

	var data []byte
	var errs []error
	var response gorequest.Response
	if response, data, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post(fmt.Sprintf("%s/graphql", HostLeetcode)).
		Set("origin", HostLeetcode).
		Set("referer", HostLeetcode).
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

	var questionID int
	if questionID, err = strconv.Atoi(b.Data.Question.QuestionId); err != nil {
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

	logging.Infof("got question %d", questionID)

	var question = &table.Question{
		QuestionID:            questionID,
		Content:               []byte(b.Data.Question.Content),
		TranslatedContent:     []byte(b.Data.Question.TranslatedContent),
		CodeSnippets:          codeSnippets,
		LangToValidPlayground: []byte(b.Data.Question.LangToValidPlayground),
		SimilarQuestions:      []byte(b.Data.Question.SimilarQuestions),
		Stats:                 []byte(b.Data.Question.Stats),
		TopicTags:             topicTags,
	}

	if err = question.Create(); err != nil {
		return
	}

	if viper.GetString("Generate.Readme") != "" {
		if err = i.readme(question, viper.GetString("Generate.Readme")); err != nil {
			return
		}
	}

	return
}

func (i *Instance) readme(question *table.Question, basedir string) (err error) {
	var dir = fmt.Sprintf("%s/%s/%04d. %s", basedir, question.CategoryTitle,
		question.FrontendQuestionID, question.Title)
	//if question.PaidOnly {
	//	if com.IsDir(dir) {
	//		if err = os.RemoveAll(dir); err != nil {
	//			return
	//		}
	//	}
	//	return
	//}
	if !com.IsDir(dir) {
		if err = os.MkdirAll(dir, 0755); err != nil {
			return
		}
	}
	if err = i.readmeEN(question, dir); err != nil {
		return
	}
	if err = i.readmeZH(question, dir); err != nil {
		return
	}
	if err = i.makefile(dir); err != nil {
		return
	}
	return
}

func (i *Instance) readmeEN(question *table.Question, dir string) (err error) {
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
	if _, err = file.WriteString(fmt.Sprintf("### [%s](https://leetcode.com/problems/%s)\n\n",
		question.Title, question.TitleSlug)); err != nil {
		return
	}
	if _, err = file.Write(question.Content); err != nil {
		return
	}
	if err = file.Close(); err != nil {
		return
	}
	return
}

func (i *Instance) readmeZH(question *table.Question, dir string) (err error) {
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
	if _, err = file.WriteString(fmt.Sprintf("### [%s](https://leetcode-cn.com/problems/%s)\n\n",
		question.TranslatedTitle, question.TitleSlug)); err != nil {
		return
	}
	if _, err = file.Write(question.TranslatedContent); err != nil {
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
	if _, err = file.WriteString(fmt.Sprintf("%s\n", "include ../../../Makefile.lang.mk")); err != nil {
		return
	}
	if err = file.Close(); err != nil {
		return
	}
	return
}
