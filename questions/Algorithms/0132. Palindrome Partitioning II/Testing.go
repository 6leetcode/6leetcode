package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func minCut(s string) int {
	n := len(s)
	if n <= 1 {
		return 0
	}

	pal := make([][]bool, n)
	for i := range pal {
		pal[i] = make([]bool, n)
	}
	for i := n - 1; i >= 0; i-- {
		for j := i; j < n; j++ {
			if s[i] == s[j] && (j-i < 2 || pal[i+1][j-1]) {
				pal[i][j] = true
			}
		}
	}

	dp := make([]int, n)
	for i := 0; i < n; i++ {
		if pal[0][i] {
			dp[i] = 0
			continue
		}
		dp[i] = i
		for j := 1; j <= i; j++ {
			if pal[j][i] && dp[j-1]+1 < dp[i] {
				dp[i] = dp[j-1] + 1
			}
		}
	}
	return dp[n-1]
}

// ------------------------------- solution end ---------------------------------

func main() {
	for _, s := range []string{"aab", "a", "ab"} {
		fmt.Printf("Input:  %s\n", s)
		fmt.Printf("Output: %d\n", minCut(s))
	}
}
