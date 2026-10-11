package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func getKthMagicNumber(k int) int {
	dp := make([]int64, k)
	dp[0] = 1
	i3, i5, i7 := 0, 0, 0
	for i := 1; i < k; i++ {
		n3, n5, n7 := dp[i3]*3, dp[i5]*5, dp[i7]*7
		m := n3
		if n5 < m {
			m = n5
		}
		if n7 < m {
			m = n7
		}
		dp[i] = m
		if m == n3 {
			i3++
		}
		if m == n5 {
			i5++
		}
		if m == n7 {
			i7++
		}
	}
	return int(dp[k-1])
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 5
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", getKthMagicNumber(input))
}
