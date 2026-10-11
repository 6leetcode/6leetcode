package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func uniquePathsWithObstacles(obstacleGrid [][]int) int {
	m, n := len(obstacleGrid), len(obstacleGrid[0])
	dp := make([]int, n)
	if obstacleGrid[0][0] == 0 {
		dp[0] = 1
	}
	for j := 1; j < n; j++ {
		if obstacleGrid[0][j] == 0 {
			dp[j] = dp[j-1]
		}
	}
	for i := 1; i < m; i++ {
		if obstacleGrid[i][0] == 1 {
			dp[0] = 0
		}
		for j := 1; j < n; j++ {
			if obstacleGrid[i][j] == 1 {
				dp[j] = 0
			} else {
				dp[j] += dp[j-1]
			}
		}
	}
	return dp[n-1]
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := [][]int{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}}
	fmt.Printf("Input:  %s\n", helper.MatrixShow(input))
	fmt.Printf("Output: %d\n", uniquePathsWithObstacles(input))
}
