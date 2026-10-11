package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func isFlipedString(s1 string, s2 string) bool {
	if len(s1) != len(s2) {
		return false
	}
	return strings.Contains(s2+s2, s1)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var s1, s2 = "waterbottle", "erbottlewat"
	fmt.Printf("Input:  %s %s\n", s1, s2)
	fmt.Printf("Output: %t\n", isFlipedString(s1, s2))
}
