package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func reverseString(s []byte) {
	for i, j := 0, len(s)-1; i < j; i, j = i+1, j-1 {
		s[i], s[j] = s[j], s[i]
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []byte("hello")
	fmt.Printf("Input:  %s\n", input)
	reverseString(input)
	fmt.Printf("Output: %s\n", input)
}
