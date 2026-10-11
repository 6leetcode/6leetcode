package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isPowerOfThree(n int) bool {
	return n > 0 && 1162261467%n == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 27
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %t\n", isPowerOfThree(input))
}
