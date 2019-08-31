package leetcode

import (
	"fmt"

	"github.com/parnurzeal/gorequest"
)

func (i *Instance) Question(titleSlug string) (err error) {
	var query = fmt.Sprintf(`{"operationName":"questionData","variables":{"titleSlug":"%s"},"query":"query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    langToValidPlayground\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    envInfo\n    __typename\n  }\n}\n"}`, titleSlug)

	var response gorequest.Response
	var errs []error
	var data []byte

	if response, data, errs = gorequest.New().
		Post("https://leetcode-cn.com/graphql").
		Set("Referer", "https://leetcode-cn.com/problems/two-sum/").
		Set("x-csrftoken", i.csrftoken).
		Set("cache-control", "no-cache").
		Set("user-agent", user_agent).
		Set("origin", "https://leetcode-cn.com").
		Set("Connection", "keep-alive").
		Type("json").
		AddCookies(i.cookie).
		Send(query).EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	if response.Request.Response != nil {
		i.cookie = response.Request.Response.Cookies()
	}

	fmt.Println(string(data))

	return
}
