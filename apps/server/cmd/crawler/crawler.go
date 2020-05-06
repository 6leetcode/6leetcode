package crawler

import (
	"github.com/6leetcode/6leetcode/apps/backends/common/leetcode"
)

func Initialize() (err error) {
	var instance *leetcode.Instance

	if instance, err = leetcode.New(); err != nil {
		return
	}

	err = instance.All()

	return
}
