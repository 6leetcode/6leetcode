package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func uniquePaths(m int, n int) int {
	dp := make([]int, n)
	for j := range dp {
		dp[j] = 1
	}
	for i := 1; i < m; i++ {
		for j := 1; j < n; j++ {
			dp[j] += dp[j-1]
		}
	}
	return dp[n-1]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var m, n = 3, 7
	fmt.Printf("Input:  %d %d\n", m, n)
	fmt.Printf("Output: %d\n", uniquePaths(m, n))
}
