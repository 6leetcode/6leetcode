package leetcode

import (
	"github.com/parnurzeal/gorequest"

	"github.com/6leetcode/6leetcode/apps/backends/common/leetcode/cookie"
)

const __cfduid = "dc89140ed9ccd22113384d2362237ed051562917123"
const user_agent = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.132 Safari/537.36"

type Instance struct {
	request   *gorequest.SuperAgent
	csrftoken string
}

func New() (instance Instance, err error) {
	var request = gorequest.New()
	var response gorequest.Response
	var errs []error

	if response, _, errs = request.Get("https://leetcode.com/").
		Set("cookie", "__cfduid="+__cfduid).
		Set("user-agent", user_agent).
		EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	var cookie = cookie.Parse(response.Header.Get("Set-Cookie"))

	instance = Instance{
		request: gorequest.New().
			Set("x-csrftoken", cookie["csrftoken"]).
			Set("content-type", "application/json").
			Set("cache-control", "no-cache").
			Set("user-agent", user_agent).
			Set("origin", "https://leetcode.com").
			Set("Connection", "keep-alive"),
		csrftoken: cookie["csrftoken"],
	}

	return
}
