package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func generateParenthesis(n int) []string {
	var res []string
	var backtrack func(cur string, open, close int)
	backtrack = func(cur string, open, close int) {
		if len(cur) == n*2 {
			res = append(res, cur)
			return
		}
		if open < n {
			backtrack(cur+"(", open+1, close)
		}
		if close < open {
			backtrack(cur+")", open, close+1)
		}
	}
	backtrack("", 0, 0)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 3
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %v\n", generateParenthesis(input))
}
