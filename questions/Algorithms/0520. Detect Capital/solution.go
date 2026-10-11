package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func detectCapitalUse(word string) bool {
	upper, lower := 0, 0
	for i := 0; i < len(word); i++ {
		if word[i] >= 'a' && word[i] <= 'z' {
			lower++
		} else {
			upper++
		}
	}
	return upper == len(word) || lower == len(word) || (upper == 1 && word[0] >= 'A' && word[0] <= 'Z')
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "Google"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", detectCapitalUse(input))
}
