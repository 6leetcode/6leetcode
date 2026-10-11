package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func kClosest(points [][]int, K int) [][]int {
	sort.Slice(points, func(i, j int) bool {
		return points[i][0]*points[i][0]+points[i][1]*points[i][1] < points[j][0]*points[j][0]+points[j][1]*points[j][1]
	})
	return points[:K]
}

// ------------------------------- solution end ---------------------------------

func main() {
	input1 := [][]int{{3, 3}, {5, -1}, {-2, 4}}
	var input2 = 2
	fmt.Printf("Input:  %s %d\n", helper.MatrixShow(input1), input2)
	fmt.Printf("Output: %s\n", helper.MatrixShow(kClosest(input1, input2)))
}
