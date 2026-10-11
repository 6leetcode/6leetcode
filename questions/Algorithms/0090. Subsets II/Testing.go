package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func subsetsWithDup(nums []int) [][]int {
	sort.Ints(nums)
	var res [][]int
	var cur []int
	var dfs func(start int)
	dfs = func(start int) {
		tmp := make([]int, len(cur))
		copy(tmp, cur)
		res = append(res, tmp)
		for i := start; i < len(nums); i++ {
			if i > start && nums[i] == nums[i-1] {
				continue
			}
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
	var input = []int{1, 2, 2}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %s\n", helper.MatrixShow(subsetsWithDup(input)))
}
