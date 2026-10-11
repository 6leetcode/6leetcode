package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func numDistinct(s string, t string) int {
	m := len(t)
	dp := make([]uint64, m+1)
	dp[0] = 1
	for i := 0; i < len(s); i++ {
		for j := m; j >= 1; j-- {
			if s[i] == t[j-1] {
				dp[j] += dp[j-1]
			}
		}
	}
	return int(dp[m])
}

// ------------------------------- solution end ---------------------------------

func main() {
	cases := [][2]string{
		{"rabbbit", "rabbit"},
		{"babgbag", "bag"},
		{"ddd", "dd"},
	}
	for _, c := range cases {
		fmt.Printf("Input:  %q, %q\n", c[0], c[1])
		fmt.Printf("Output: %d\n", numDistinct(c[0], c[1]))
	}
}
