package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isValid(s string) bool {
	pairs := map[byte]byte{')': '(', ']': '[', '}': '{'}
	var stack []byte
	for i := 0; i < len(s); i++ {
		if open, ok := pairs[s[i]]; ok {
			if len(stack) == 0 || stack[len(stack)-1] != open {
				return false
			}
			stack = stack[:len(stack)-1]
		} else {
			stack = append(stack, s[i])
		}
	}
	return len(stack) == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "()[]{}"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", isValid(input))
}
