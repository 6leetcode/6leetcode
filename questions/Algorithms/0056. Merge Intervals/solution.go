package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func merge(intervals [][]int) [][]int {
	sort.Slice(intervals, func(i, j int) bool { return intervals[i][0] < intervals[j][0] })
	res := [][]int{}
	for _, iv := range intervals {
		if len(res) == 0 || res[len(res)-1][1] < iv[0] {
			res = append(res, []int{iv[0], iv[1]})
		} else if iv[1] > res[len(res)-1][1] {
			res[len(res)-1][1] = iv[1]
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := [][]int{{1, 4}, {4, 5}}
	fmt.Printf("Input:  %s\n", helper.MatrixShow(input))
	fmt.Printf("Output: %s\n", helper.MatrixShow(merge(input)))
}
