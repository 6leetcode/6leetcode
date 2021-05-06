package helper

import "fmt"

func ArrayShow(array []int) (res string) {
	res = "["
	for index, entry := range array {
		if index == 0 {
			res += fmt.Sprintf("%d", entry)
		} else {
			res += fmt.Sprintf(", %d", entry)
		}
	}
	res += "]"
	return
}
