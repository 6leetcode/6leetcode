package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func minimumTotal(triangle [][]int) int {
	n := len(triangle)
	dp := make([]int, n)
	copy(dp, triangle[n-1])
	for i := n - 2; i >= 0; i-- {
		for j := 0; j <= i; j++ {
			if dp[j] < dp[j+1] {
				dp[j] = triangle[i][j] + dp[j]
			} else {
				dp[j] = triangle[i][j] + dp[j+1]
			}
		}
	}
	return dp[0]
}

// ------------------------------- solution end ---------------------------------

func main() {
	cases := [][][]int{
		{{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}},
		{{-10}},
	}
	for _, triangle := range cases {
		fmt.Printf("Input:  %s\n", helper.MatrixShow(triangle))
		fmt.Printf("Output: %d\n", minimumTotal(triangle))
	}
}
