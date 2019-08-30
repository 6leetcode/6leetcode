package leetcode

const __cfduid = "dc89140ed9ccd22113384d2362237ed051562917123"
const user_agent = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.132 Safari/537.36"
const csrftoken = "noUNA0AqLwbBnIDVyGRFCeJL8OzmhjCvkVMp3ljvloQKVRXZIpw4FxIITwWvCSnr"

type Instance struct {
	__cfduid   string
	csrftoken  string
	user_agent string

	session string

	UserName string
	Password string
}

func New() (instance Instance, err error) {
	instance = Instance{
		csrftoken:  csrftoken,
		__cfduid:   __cfduid,
		user_agent: user_agent,
	}
	return
}
