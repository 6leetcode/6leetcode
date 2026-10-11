package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func longestValidParentheses(s string) int {
	stack := []int{-1}
	best := 0
	for i := 0; i < len(s); i++ {
		if s[i] == '(' {
			stack = append(stack, i)
		} else {
			stack = stack[:len(stack)-1]
			if len(stack) == 0 {
				stack = append(stack, i)
			} else if l := i - stack[len(stack)-1]; l > best {
				best = l
			}
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "(()"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", longestValidParentheses(input))
}
