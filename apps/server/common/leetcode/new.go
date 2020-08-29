package leetcode

import "net/http"

// Instance instance
type Instance struct {
	csrftoken string
	userAgent string
	cookie    []*http.Cookie
}

// New new
func New() (instance *Instance, err error) {
	instance = &Instance{userAgent: USERAGENT}
	if err = instance.CSRF(); err != nil {
		return
	}
	if err = instance.Login(); err != nil {
		return
	}
	return
}
