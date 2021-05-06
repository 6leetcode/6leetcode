package helper

import "fmt"

func MatrixShow(matrix [][]int) (res string) {
	res = "["
	for rowNum, row := range matrix {
		res += "["
		for index, entry := range row {
			if index == 0 {
				res += fmt.Sprintf("%d", entry)
			} else {
				res += fmt.Sprintf(", %d", entry)
			}
		}
		if rowNum != len(matrix)-1 {
			res += "], "
		} else {
			res += "]"
		}
	}
	res += "]"
	return res
}
