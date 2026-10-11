package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isPowerOfTwo(n int) bool {
	return n > 0 && n&(n-1) == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 16
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %t\n", isPowerOfTwo(input))
}
