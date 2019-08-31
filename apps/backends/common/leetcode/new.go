package leetcode

import "net/http"

const user_agent = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.132 Safari/537.36"

type Instance struct {
	csrftoken  string
	user_agent string
	cookie     []*http.Cookie
}

func New() (instance *Instance) {
	instance = &Instance{
		user_agent: user_agent,
	}
	return
}
