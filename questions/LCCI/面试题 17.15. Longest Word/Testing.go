package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func longestWord(words []string) string {
	dict := map[string]bool{}
	for _, w := range words {
		dict[w] = true
	}
	sort.Slice(words, func(i, j int) bool {
		if len(words[i]) != len(words[j]) {
			return len(words[i]) > len(words[j])
		}
		return words[i] < words[j]
	})
	canForm := func(w string) bool {
		n := len(w)
		dp := make([]bool, n+1)
		dp[0] = true
		for i := 1; i <= n; i++ {
			for j := 0; j < i; j++ {
				if !dp[j] {
					continue
				}
				if i == n && j == 0 {
					continue
				}
				if dict[w[j:i]] {
					dp[i] = true
					break
				}
			}
		}
		return dp[n]
	}
	for _, w := range words {
		if canForm(w) {
			return w
		}
	}
	return ""
}

// ------------------------------- solution end ---------------------------------

func main() {
	words := []string{"cat", "banana", "dog", "nana", "walk", "walker", "dogwalker"}
	fmt.Println(`Input:  ["cat","banana","dog","nana","walk","walker","dogwalker"]`)
	fmt.Printf("Output: %q\n", longestWord(words))
}
