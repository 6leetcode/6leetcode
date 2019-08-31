package leetcode

import (
	"net/http"
	"time"
)

func Cookie(c map[string]string) (cookies []*http.Cookie) {
	for k, v := range c {
		cookies = append(cookies, &http.Cookie{
			Name:    k,
			Value:   v,
			Path:    "/",
			Domain:  ".leetcode.com",
			Secure:  true,
			Expires: time.Now(),
		})
	}
	return
}
