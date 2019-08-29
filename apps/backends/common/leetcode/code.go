package leetcode

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
	"strconv"
	"strings"
	"time"

	"github.com/parnurzeal/gorequest"
)

const guestToken = "uVAcMSJE33Sc9Pj24P3v4pEZnjngJDbs5yElxS2vXKCnMkjUzwQoNpaoP4UmJxcd"

// Response the structure of leetcode response
type Response struct {
	Data ResponseData `json:"data"`
}

// ResponseData the structure of leetcode response data
type ResponseData struct {
	Question interface{} `json:"question"`
}

// Problems the structure of all problems
type Problems struct {
	StatStatusPairs []ProblemStatStatus `json:"stat_status_pairs"`
	NumTotal        int                 `json:"num_total"`
}

// ProblemStatStatus the structure of a problem status
type ProblemStatStatus struct {
	Stat       ProblemStat `json:"stat"`
	Difficulty struct {
		Level int `json:"level"`
	} `json:"difficulty"`
}

// ProblemStat the structure of a problem stat
type ProblemStat struct {
	TotalAcs            int    `json:"total_acs"`
	QuestionTitle       string `json:"question__title"`
	IsNewQuestion       bool   `json:"is_new_question"`
	QuestionArticleSlug string `json:"question__article__slug"`
	TotalSubmitted      int    `json:"total_submitted"`
	FrontendQuestionID  int    `json:"frontend_question_id"`
	QuestionTitleSlug   string `json:"question__title_slug"`
	QuestionArticleLive bool   `json:"question__article__live"`
	QuestionHide        bool   `json:"question__hide"`
	QuestionID          int    `json:"question_id"`
}

// Do do requesting and parse the response data
func (p *Problems) Do() (err error) {
	var request = gorequest.New()
	var response gorequest.Response
	var data []byte
	var errs []error
	response, data, errs = request.Get("https://leetcode.com/api/problems/all/").EndBytes()
	fmt.Println(string(data))
	fmt.Println(len(errs))
	fmt.Println(response.Header.Get("set-cookie"), response.Header.Get("csrftoken"))
	//req, err := http.NewRequest("GET",
	//	"https://leetcode.com/api/problems/all/", nil)
	//if err != nil {
	//	return err
	//}
	//client := &http.Client{
	//	Timeout: time.Second * 15,
	//}
	//
	//res, err := client.Do(req)
	//if err != nil {
	//	return err
	//}
	//
	//data, err := ioutil.ReadAll(res.Body)
	//if err != nil {
	//	return err
	//}
	//defer res.Body.Close()
	//
	//if err = json.Unmarshal(data, p); err != nil {
	//	return err
	//}

	return nil
}

// StatStatus returns ProblemStatStatus with id or title string
func (p Problems) StatStatus(s string) *ProblemStatStatus {
	s = strings.ToLower(strings.TrimSpace(s))

	if id, err := strconv.Atoi(s); err == nil {
		for _, pair := range p.StatStatusPairs {
			if id == pair.Stat.QuestionID {
				return &pair
			}
		}
	}

	for _, pair := range p.StatStatusPairs {
		if s == strings.ToLower(pair.Stat.QuestionTitle) ||
			s == strings.ToLower(pair.Stat.QuestionTitleSlug) {
			return &pair
		}
	}
	return nil
}

// Code the struct of leetcode codes.
type Code struct {
	Text        string `json:"text"`
	Value       string `json:"value"`
	DefaultCode string `json:"defaultCode"`
}

// Codes the slice of Code
type Codes []*Code

// Code returns Code with lang.
func (cs Codes) Code(lang string) *Code {
	for _, c := range cs {
		if strings.ToLower(c.Text) == lang || c.Value == lang {
			return c
		}
	}
	return nil
}

// BaseQuestion the structure of the base question
type BaseQuestion struct {
	Problems          Problems `json:"-"`
	Referer           string   `json:"-"`
	Codes             Codes    `json:"-"`
	QuestionID        string   `json:"questionId"`
	QuestionTitle     string   `json:"questionTitle"`
	Content           string   `json:"content"`
	Difficulty        string   `json:"difficulty"`
	DiscussURL        string   `json:"discussUrl"`
	CategoryTitle     string   `json:"categoryTitle"`
	SubmitURL         string   `json:"submitUrl"`
	InterpretURL      string   `json:"interpretUrl"`
	CodeDefinition    string   `json:"codeDefinition"`
	MetaData          string   `json:"metaData"`
	EnvInfo           string   `json:"envInfo"`
	Article           string   `json:"article"`
	QuestionDetailURL string   `json:"questionDetailUrl"`
	DiscussCategoryID string   `json:"discussCategoryId"`
}

// Valid returns true if valid question
func (q BaseQuestion) Valid() bool {
	return q.QuestionID != "" && q.QuestionTitle != ""
}

// GetCodeDefinition returns code definition of question
func (q BaseQuestion) GetCodeDefinition(lang string) (code string, err error) {
	if c := q.Codes.Code(lang); c != nil {
		code = c.DefaultCode
		return
	}
	return
}

// GetEnvInfo returns env info
func (q BaseQuestion) GetEnvInfo(lang string) (info []string, err error) {
	s, err := strconv.Unquote(strconv.Quote(q.EnvInfo))
	if err != nil {
		return
	}

	m := make(map[string][]string)
	if err = json.Unmarshal([]byte(s), &m); err != nil {
		return
	}

	if temp, ok := m[lang]; ok && len(temp) != 0 {
		info = temp
	}
	return
}

// Do do requesting and parse the response data
func (q *BaseQuestion) Do(key string) error {
	titleSlug := key

	// try to parse id
	if q.Problems.Do() == nil {
		if s := q.Problems.StatStatus(key); s != nil {
			titleSlug = s.Stat.QuestionTitleSlug
		}
	}

	// parse title slug
	body := strings.NewReader(fmt.Sprintf(`{"operationName":"getQuestionDetail","variables":{"titleSlug":"%s"},"query":"query getQuestionDetail($titleSlug: String!) {\n  isCurrentUserAuthenticated\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    questionTitle\n    translatedTitle\n    questionTitleSlug\n    content\n    translatedContent\n    difficulty\n    stats\n    allowDiscuss\n    contributors {\n      username\n      profileUrl\n      __typename\n    }\n    similarQuestions\n    mysqlSchemas\n    randomQuestionUrl\n    sessionId\n    categoryTitle\n    submitUrl\n    interpretUrl\n    codeDefinition\n    sampleTestCase\n    enableTestMode\n    metaData\n    langToValidPlayground\n    enableRunCode\n    enableSubmit\n    judgerAvailable\n    infoVerified\n    envInfo\n    urlManager\n    article\n    questionDetailUrl\n    libraryUrl\n    companyTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    __typename\n  }\n  interviewed {\n    interviewedUrl\n    companies {\n      id\n      name\n      slug\n      __typename\n    }\n    timeOptions {\n      id\n      name\n      __typename\n    }\n    stageOptions {\n      id\n      name\n      __typename\n    }\n    __typename\n  }\n  subscribeUrl\n  isPremium\n  loginUrl\n}\n"}`, titleSlug))
	req, err := http.NewRequest("POST", "https://leetcode.com/graphql", body)
	if err != nil {
		return err
	}
	q.Referer = fmt.Sprintf(
		"https://leetcode.com/problems/%s/description/",
		titleSlug,
	)
	req.Header.Set("x-csrftoken", guestToken)
	req.Header.Set("content-type", "application/json")
	req.Header.Set("cache-control", "no-cache")
	req.Header.Set("referer", q.Referer)
	client := &http.Client{
		Timeout: time.Second * 15,
	}
	req.AddCookie(&http.Cookie{
		Name:    "csrftoken",
		Value:   guestToken,
		Path:    "/",
		Domain:  ".leetcode.com",
		Secure:  true,
		Expires: time.Now(),
	})
	res, err := client.Do(req)
	if err != nil {
		return err
	}

	data, err := ioutil.ReadAll(res.Body)
	if err != nil {
		return err
	}
	defer res.Body.Close()

	if err = json.Unmarshal(data, &Response{
		Data: ResponseData{
			Question: q,
		},
	}); err != nil {
		return err
	}

	s, err := strconv.Unquote(strconv.Quote(q.CodeDefinition))
	if err != nil {
		return err
	}

	if err = json.Unmarshal([]byte(s), &q.Codes); err != nil {
		return err
	}

	return nil
}
