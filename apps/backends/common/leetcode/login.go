package leetcode

import (
	"fmt"

	"github.com/parnurzeal/gorequest"
)

func (i Instance) Login() (err error) {
	var response gorequest.Response
	var errs []error

	type loginBody struct {
		Csrfmiddlewaretoken string `json:"csrfmiddlewaretoken"`
		Login               string `json:"login"`
		Password            string `json:"password"`
		Next                string `json:"next"`
	}

	var b = loginBody{i.csrftoken, i.UserName, i.Password, "/problemset/all/"}

	if response, _, errs = gorequest.New().
		Post("https://leetcode.com/accounts/login").
		Set("Referer", "https://leetcode.com/accounts/login/").
		Set("x-csrftoken", i.csrftoken).
		Set("cache-control", "no-cache").
		Set("user-agent", user_agent).
		Set("origin", "https://leetcode.com").
		Set("Connection", "keep-alive").
		Set("cookie", fmt.Sprintf("csrftoken=%s; __cfduid=%s", i.csrftoken, __cfduid)).
		Type("multipart").
		Send(b).EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	for _, cookie := range response.Request.Response.Cookies() {
		if cookie.Name == "csrftoken" {
			i.csrftoken = cookie.Value
		} else if cookie.Name == "LEETCODE_SESSION" {
			i.session = cookie.Value
		}
	}

	fmt.Println(i)

	return
}
