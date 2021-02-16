package crawler

import (
	"6leetcode/common/leetcode"
)

// Initialize initialize the crawler
func Initialize() (err error) {
	var instance *leetcode.Instance

	if instance, err = leetcode.New(); err != nil {
		return
	}

	_, err = instance.All(false)

	return
}
