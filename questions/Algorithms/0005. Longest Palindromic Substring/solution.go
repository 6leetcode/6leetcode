package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func longestPalindrome(s string) string {
	if len(s) < 2 {
		return s
	}
	start, maxLen := 0, 1

	expand := func(l, r int) {
		for l >= 0 && r < len(s) && s[l] == s[r] {
			l--
			r++
		}
		if r-l-1 > maxLen {
			maxLen = r - l - 1
			start = l + 1
		}
	}

	for i := 0; i < len(s); i++ {
		expand(i, i)
		expand(i, i+1)
	}
	return s[start : start+maxLen]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "babad"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %s\n", longestPalindrome(input))
}
