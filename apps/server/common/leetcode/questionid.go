package leetcode

import (
	"fmt"
	"regexp"
	"strconv"
)

var commonRegex = regexp.MustCompile(`^\d{1,4}$`)
var LCPRegex = regexp.MustCompile(`^LCP\s\d{1,4}$`)

func QuestionID(id string) (res string) {
	if commonRegex.MatchString(id) {
		i, _ := strconv.Atoi(id)
		res = fmt.Sprintf("%04d", i)
	} else if LCPRegex.MatchString(id) {
		res = id
	} else {
		res = id
	}
	return
}
