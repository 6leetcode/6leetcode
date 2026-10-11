package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func minDistance(word1 string, word2 string) int {
	m, n := len(word1), len(word2)
	dp := make([]int, n+1)
	for j := 0; j <= n; j++ {
		dp[j] = j
	}
	for i := 1; i <= m; i++ {
		prev := dp[0]
		dp[0] = i
		for j := 1; j <= n; j++ {
			tmp := dp[j]
			if word1[i-1] == word2[j-1] {
				dp[j] = prev
			} else {
				best := prev
				if dp[j] < best {
					best = dp[j]
				}
				if dp[j-1] < best {
					best = dp[j-1]
				}
				dp[j] = best + 1
			}
			prev = tmp
		}
	}
	return dp[n]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var word1, word2 = "horse", "ros"
	fmt.Printf("Input:  %s %s\n", word1, word2)
	fmt.Printf("Output: %d\n", minDistance(word1, word2))
}
