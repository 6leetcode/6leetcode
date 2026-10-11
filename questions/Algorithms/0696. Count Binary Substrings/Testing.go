package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func countBinarySubstrings(s string) int {
	n, pre, curr := 0, 0, 1
	for i := 0; i < len(s)-1; i++ {
		if s[i] == s[i+1] {
			curr++
		} else {
			pre = curr
			curr = 1
		}
		if pre >= curr {
			n++
		}
	}
	return n
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "00110011"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", countBinarySubstrings(input))
}
