package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func canPermutePalindrome(s string) bool {
	count := make([]int, 128)
	for i := 0; i < len(s); i++ {
		count[s[i]] ^= 1
	}
	odd := 0
	for _, c := range count {
		odd += c
	}
	return odd <= 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "tactcoa"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", canPermutePalindrome(input))
}
