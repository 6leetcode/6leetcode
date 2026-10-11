package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func combinationSum2(candidates []int, target int) [][]int {
	sort.Ints(candidates)
	var res [][]int
	var cur []int
	var dfs func(start, remain int)
	dfs = func(start, remain int) {
		if remain == 0 {
			tmp := make([]int, len(cur))
			copy(tmp, cur)
			res = append(res, tmp)
			return
		}
		for i := start; i < len(candidates); i++ {
			if candidates[i] > remain {
				break
			}
			if i > start && candidates[i] == candidates[i-1] {
				continue
			}
			cur = append(cur, candidates[i])
			dfs(i+1, remain-candidates[i])
			cur = cur[:len(cur)-1]
		}
	}
	dfs(0, target)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{10, 1, 2, 7, 6, 1, 5}
	var input2 = 8
	fmt.Printf("Input:  %v %d\n", input1, input2)
	fmt.Printf("Output: %s\n", helper.MatrixShow(combinationSum2(input1, input2)))
}
