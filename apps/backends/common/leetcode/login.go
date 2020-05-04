package leetcode

import (
	"net/http"
	"time"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
)

func (i *Instance) Login() (err error) {
	var response gorequest.Response
	var errs []error

	type loginBody struct {
		CSRFMiddlewareToken string `json:"csrfmiddlewaretoken"`
		Login               string `json:"login"`
		Password            string `json:"password"`
		Next                string `json:"next"`
	}

	var b = loginBody{
		CSRFMiddlewareToken: i.csrftoken,
		Login:               viper.GetString("Login.Name"),
		Password:            viper.GetString("Login.Password"),
		Next:                "/problemset/all/",
	}

	if response, _, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post("https://leetcode-cn.com/accounts/login").
		Set("Referer", "https://leetcode-cn.com/").
		Set("origin", "https://leetcode-cn.com").
		Set("x-csrftoken", i.csrftoken).
		Set("user-agent", i.userAgent).
		Type("multipart").
		AddCookie(&http.Cookie{
			Name:    "csrftoken",
			Value:   i.csrftoken,
			Path:    "/",
			Domain:  ".leetcode-cn.com",
			Secure:  true,
			Expires: time.Now(),
		}).
		Send(b).EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	for _, c := range response.Request.Response.Cookies() {
		if c.Name == "csrftoken" {
			i.csrftoken = c.Value
		}
	}

	i.cookie = response.Request.Response.Cookies()

	return
}
