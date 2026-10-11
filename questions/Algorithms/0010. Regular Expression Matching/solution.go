package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isMatch(s string, p string) bool {
	if len(p) == 0 {
		return len(s) == 0
	}

	firstMatch := len(s) > 0 && (s[0] == p[0] || p[0] == '.')

	if len(p) >= 2 && p[1] == '*' {
		return isMatch(s, p[2:]) || (firstMatch && isMatch(s[1:], p))
	}
	return firstMatch && isMatch(s[1:], p[1:])
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "aab"
	var input2 = "c*a*b"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %t\n", isMatch(input1, input2))
}
