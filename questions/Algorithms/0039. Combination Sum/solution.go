package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func combinationSum(candidates []int, target int) [][]int {
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
				continue
			}
			cur = append(cur, candidates[i])
			dfs(i, remain-candidates[i])
			cur = cur[:len(cur)-1]
		}
	}
	dfs(0, target)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{2, 3, 6, 7}
	var input2 = 7
	fmt.Printf("Input:  %v %d\n", input1, input2)
	fmt.Printf("Output: %s\n", helper.MatrixShow(combinationSum(input1, input2)))
}
