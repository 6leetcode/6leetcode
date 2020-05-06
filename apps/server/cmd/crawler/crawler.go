package crawler

import (
	"6leetcode/common/leetcode"
)

func Initialize() (err error) {
	var instance *leetcode.Instance

	if instance, err = leetcode.New(); err != nil {
		return
	}

	err = instance.All()

	return
}
