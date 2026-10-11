package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func minPathSum(grid [][]int) int {
	m, n := len(grid), len(grid[0])
	dp := make([]int, n)
	dp[0] = grid[0][0]
	for j := 1; j < n; j++ {
		dp[j] = dp[j-1] + grid[0][j]
	}
	for i := 1; i < m; i++ {
		dp[0] += grid[i][0]
		for j := 1; j < n; j++ {
			best := dp[j]
			if dp[j-1] < best {
				best = dp[j-1]
			}
			dp[j] = best + grid[i][j]
		}
	}
	return dp[n-1]
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := [][]int{{1, 3, 1}, {1, 5, 1}, {4, 2, 1}}
	fmt.Printf("Input:  %s\n", helper.MatrixShow(input))
	fmt.Printf("Output: %d\n", minPathSum(input))
}
