package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func CheckPermutation(s1 string, s2 string) bool {
	if len(s1) != len(s2) {
		return false
	}
	count := make([]int, 128)
	for i := 0; i < len(s1); i++ {
		count[s1[i]]++
		count[s2[i]]--
	}
	for _, c := range count {
		if c != 0 {
			return false
		}
	}
	return true
}

// ------------------------------- solution end ---------------------------------

func main() {
	var s1, s2 = "abc", "bca"
	fmt.Printf("Input:  %s %s\n", s1, s2)
	fmt.Printf("Output: %t\n", CheckPermutation(s1, s2))
}
