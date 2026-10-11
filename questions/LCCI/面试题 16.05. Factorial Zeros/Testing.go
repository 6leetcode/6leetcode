package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func trailingZeroes(n int) int {
	count := 0
	for n >= 5 {
		n /= 5
		count += n
	}
	return count
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 5
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", trailingZeroes(input))
}
