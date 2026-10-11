package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func combine(n int, k int) [][]int {
	var res [][]int
	var cur []int
	var dfs func(start int)
	dfs = func(start int) {
		if len(cur) == k {
			tmp := make([]int, k)
			copy(tmp, cur)
			res = append(res, tmp)
			return
		}
		for i := start; i <= n; i++ {
			cur = append(cur, i)
			dfs(i + 1)
			cur = cur[:len(cur)-1]
		}
	}
	dfs(1)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var n, k = 4, 2
	fmt.Printf("Input:  %d %d\n", n, k)
	fmt.Printf("Output: %s\n", helper.MatrixShow(combine(n, k)))
}
