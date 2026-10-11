package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func waysToChange(n int) int {
	const MOD = 1000000007
	coins := []int{1, 5, 10, 25}
	dp := make([]int, n+1)
	dp[0] = 1
	for _, coin := range coins {
		for i := coin; i <= n; i++ {
			dp[i] = (dp[i] + dp[i-coin]) % MOD
		}
	}
	return dp[n]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 10
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", waysToChange(input))
}
