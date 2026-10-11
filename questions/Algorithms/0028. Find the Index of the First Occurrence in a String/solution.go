package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func strStr(haystack string, needle string) int {
	n, m := len(haystack), len(needle)
	if m == 0 {
		return 0
	}
	for i := 0; i+m <= n; i++ {
		j := 0
		for j < m && haystack[i+j] == needle[j] {
			j++
		}
		if j == m {
			return i
		}
	}
	return -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "sadbutsad"
	var input2 = "sad"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %d\n", strStr(input1, input2))
}
