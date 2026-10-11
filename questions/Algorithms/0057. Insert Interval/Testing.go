package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func insert(intervals [][]int, newInterval []int) [][]int {
	res := [][]int{}
	i := 0
	for i < len(intervals) && intervals[i][1] < newInterval[0] {
		res = append(res, intervals[i])
		i++
	}
	lo, hi := newInterval[0], newInterval[1]
	for i < len(intervals) && intervals[i][0] <= hi {
		if intervals[i][0] < lo {
			lo = intervals[i][0]
		}
		if intervals[i][1] > hi {
			hi = intervals[i][1]
		}
		i++
	}
	res = append(res, []int{lo, hi})
	for i < len(intervals) {
		res = append(res, intervals[i])
		i++
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	input1 := [][]int{{1, 3}, {6, 9}}
	input2 := []int{2, 5}
	fmt.Printf("Input:  %s %v\n", helper.MatrixShow(input1), input2)
	fmt.Printf("Output: %s\n", helper.MatrixShow(insert(input1, input2)))
}
