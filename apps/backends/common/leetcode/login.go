package leetcode

import (
	"net/http"
	"time"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
)

const csrftoken = "F8demdcvchuti3uNs38JsQDPmFs72QUdVOskHLxy8kGYutwZwGe4PKEPrGAuI8Hl"

func (i *Instance) Login() (err error) {
	var response gorequest.Response
	var errs []error

	type loginBody struct {
		Csrfmiddlewaretoken string `json:"csrfmiddlewaretoken"`
		Login               string `json:"login"`
		Password            string `json:"password"`
		Next                string `json:"next"`
	}

	var b = loginBody{i.csrftoken, viper.GetString("Login.Name"), viper.GetString("Login.Password"), "/problemset/all/"}

	if response, _, errs = gorequest.New().
		Post("https://leetcode-cn.com/accounts/login").
		Set("Referer", "https://leetcode-cn.com/").
		Set("origin", "https://leetcode-cn.com").
		Set("x-csrftoken", csrftoken).
		Set("user-agent", user_agent).
		Type("multipart").
		AddCookie(&http.Cookie{
			Name:    "csrftoken",
			Value:   csrftoken,
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
