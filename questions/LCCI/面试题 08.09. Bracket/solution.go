package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func generateParenthesis(n int) []string {
	var res []string
	var cur []byte
	var backtrack func(open, close int)
	backtrack = func(open, close int) {
		if len(cur) == n*2 {
			res = append(res, string(cur))
			return
		}
		if open < n {
			cur = append(cur, '(')
			backtrack(open+1, close)
			cur = cur[:len(cur)-1]
		}
		if close < open {
			cur = append(cur, ')')
			backtrack(open, close+1)
			cur = cur[:len(cur)-1]
		}
	}
	backtrack(0, 0)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 3
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %q\n", generateParenthesis(input))
}
