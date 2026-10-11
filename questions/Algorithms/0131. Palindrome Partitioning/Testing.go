package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func partition(s string) [][]string {
	var res [][]string
	var path []string

	isPalindrome := func(l, r int) bool {
		for l < r {
			if s[l] != s[r] {
				return false
			}
			l++
			r--
		}
		return true
	}

	var backtrack func(start int)
	backtrack = func(start int) {
		if start == len(s) {
			cp := make([]string, len(path))
			copy(cp, path)
			res = append(res, cp)
			return
		}
		for end := start; end < len(s); end++ {
			if !isPalindrome(start, end) {
				continue
			}
			path = append(path, s[start:end+1])
			backtrack(end + 1)
			path = path[:len(path)-1]
		}
	}

	backtrack(0)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	for _, s := range []string{"aab", "a"} {
		fmt.Printf("Input:  %s\n", s)
		fmt.Printf("Output: %v\n", partition(s))
	}
}
