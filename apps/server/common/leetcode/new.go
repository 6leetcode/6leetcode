package leetcode

import "net/http"

const USERAGENT = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.129 Safari/537.36"
const CSRFTOKEN = "F8demdcvchuti3uNs38JsQDPmFs72QUdVOskHLxy8kGYutwZwGe4PKEPrGAuI8Hl"

type Instance struct {
	csrftoken string
	userAgent string
	cookie    []*http.Cookie
}

func New() (instance *Instance, err error) {
	instance = &Instance{
		userAgent: USERAGENT,
		csrftoken: CSRFTOKEN,
	}
	err = instance.Login()
	return
}
