package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func subsets(nums []int) [][]int {
	var res [][]int
	var cur []int
	var dfs func(start int)
	dfs = func(start int) {
		tmp := make([]int, len(cur))
		copy(tmp, cur)
		res = append(res, tmp)
		for i := start; i < len(nums); i++ {
			cur = append(cur, nums[i])
			dfs(i + 1)
			cur = cur[:len(cur)-1]
		}
	}
	dfs(0)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{1, 2, 3}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %s\n", helper.MatrixShow(subsets(input)))
}
