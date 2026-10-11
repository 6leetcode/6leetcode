package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func numTrees(n int) int {
	dp := make([]int, n+1)
	dp[0] = 1
	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			dp[i] += dp[j-1] * dp[i-j]
		}
	}
	return dp[n]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 3
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", numTrees(input))
}
