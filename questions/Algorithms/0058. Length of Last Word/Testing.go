package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func lengthOfLastWord(s string) int {
	end := len(s) - 1
	for end >= 0 && s[end] == ' ' {
		end--
	}
	start := end
	for start >= 0 && s[start] != ' ' {
		start--
	}
	return end - start
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "Hello World"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", lengthOfLastWord(input))
}
