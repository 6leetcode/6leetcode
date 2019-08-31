package crawler

import (
	"github.com/6leetcode/6leetcode/apps/backends/common/leetcode"
)

func Initialize() (err error) {
	var instance = leetcode.New()
	instance.Login()
	instance.All()
	return 
}
