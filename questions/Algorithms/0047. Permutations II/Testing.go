package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func permuteUnique(nums []int) [][]int {
	sort.Ints(nums)
	n := len(nums)
	var res [][]int
	var cur []int
	used := make([]bool, n)
	var dfs func(depth int)
	dfs = func(depth int) {
		if depth == n {
			tmp := make([]int, n)
			copy(tmp, cur)
			res = append(res, tmp)
			return
		}
		for i := 0; i < n; i++ {
			if used[i] {
				continue
			}
			if i > 0 && nums[i] == nums[i-1] && !used[i-1] {
				continue
			}
			used[i] = true
			cur = append(cur, nums[i])
			dfs(depth + 1)
			cur = cur[:len(cur)-1]
			used[i] = false
		}
	}
	dfs(0)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{1, 1, 2}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %s\n", helper.MatrixShow(permuteUnique(input)))
}
