package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}
	n, k := x, 0
	for n > 0 {
		k = k*10 + n%10
		n /= 10
	}
	return k == x
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 121
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %t\n", isPalindrome(input))
}
