package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isUnique(astr string) bool {
	seen := make([]bool, 128)
	for i := 0; i < len(astr); i++ {
		c := astr[i]
		if seen[c] {
			return false
		}
		seen[c] = true
	}
	return true
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "leetcode"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", isUnique(input))
}
