package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func wordBreak(s string, wordDict []string) bool {
	n := len(s)
	dp := make([]bool, n+1)
	dp[0] = true
	for i := 1; i <= n; i++ {
		for _, w := range wordDict {
			if i >= len(w) && dp[i-len(w)] && s[i-len(w):i] == w {
				dp[i] = true
				break
			}
		}
	}
	return dp[n]
}

// ------------------------------- solution end ---------------------------------

func run(s string, dict []string) {
	fmt.Printf("Input:  s = %q, wordDict = %q\n", s, dict)
	fmt.Printf("Output: %t\n", wordBreak(s, dict))
}

func main() {
	run("leetcode", []string{"leet", "code"})
	run("applepenapple", []string{"apple", "pen"})
	run("catsandog", []string{"cats", "dog", "sand", "and", "cat"})
}
