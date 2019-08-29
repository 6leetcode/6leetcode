package leetcode

import (
	"fmt"

	"github.com/parnurzeal/gorequest"

	"github.com/6leetcode/6leetcode/apps/backends/common/leetcode/cookie"
)

func (i Instance) Login() (err error) {
	var response gorequest.Response
	var errs []error

	type body struct {
		Csrfmiddlewaretoken string `json:"csrfmiddlewaretoken"`
		Login               string `json:"login"`
		Password            string `json:"password"`
		Next                string `json:"next"`
	}

	var b = body{i.csrftoken, "itosone", "8541539655a", "/problemset/all/"}

	if response, _, errs = i.request.
		Post("https://leetcode.com/accounts/login").
		Set("Referer", "https://leetcode.com/accounts/login/").
		Set("x-csrftoken", i.csrftoken).
		Set("cache-control", "no-cache").
		Set("user-agent", user_agent).
		Set("origin", "https://leetcode.com").
		Set("Connection", "keep-alive").
		Set("cookie", fmt.Sprintf("csrftoken=%s; __cfduid=%s", i.csrftoken, __cfduid)).
		Type("multipart").
		SendStruct(b).EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	for _, cookie := range response.Request.Response.Cookies() {
		fmt.Println(cookie.Name, cookie.Value)
	}

	fmt.Println(response.Request.Response.Cookies())

	var cookie = cookie.Parse(response.Header.Get("Set-Cookie"))

	fmt.Println(cookie)

	return
}
