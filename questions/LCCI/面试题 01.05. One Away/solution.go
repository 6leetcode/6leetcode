package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func oneEditAway(first string, second string) bool {
	m, n := len(first), len(second)
	if m-n > 1 || n-m > 1 {
		return false
	}
	if m > n {
		return oneEditAway(second, first)
	}
	for i := 0; i < m; i++ {
		if first[i] != second[i] {
			if m == n {
				return first[i+1:] == second[i+1:]
			}
			return first[i:] == second[i+1:]
		}
	}
	return true
}

// ------------------------------- solution end ---------------------------------

func main() {
	var first, second = "pale", "ple"
	fmt.Printf("Input:  %s %s\n", first, second)
	fmt.Printf("Output: %t\n", oneEditAway(first, second))
}
