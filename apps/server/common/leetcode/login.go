package leetcode

import (
	"fmt"
	"net/http"
	"time"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
)

// Login login
func (i *Instance) Login() (err error) {
	type loginBody struct {
		CSRFMiddlewareToken string `json:"csrfmiddlewaretoken"`
		Login               string `json:"login"`
		Password            string `json:"password"`
		Next                string `json:"next"`
	}

	var b = loginBody{
		CSRFMiddlewareToken: i.csrftoken,
		Login:               viper.GetString("LOGIN_NAME"),
		Password:            viper.GetString("LOGIN_PASSWORD"),
		Next:                "/problemset/all/",
	}

	var errs []error
	var response gorequest.Response
	if response, _, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post(fmt.Sprintf("%s/accounts/login", HostLeetcode)).
		Set("Referer", HostLeetcode).
		Set("origin", HostLeetcode).
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

	if response.Request.Response == nil {
		err = fmt.Errorf("cannot login the leetcode, please check you password")
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
