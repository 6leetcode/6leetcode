package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isMatch(s string, p string) bool {
	sIdx, pIdx, match, star := 0, 0, 0, -1
	for sIdx < len(s) {
		if pIdx < len(p) && (p[pIdx] == '?' || p[pIdx] == s[sIdx]) {
			sIdx++
			pIdx++
		} else if pIdx < len(p) && p[pIdx] == '*' {
			star = pIdx
			match = sIdx
			pIdx++
		} else if star != -1 {
			pIdx = star + 1
			match++
			sIdx = match
		} else {
			return false
		}
	}
	for pIdx < len(p) && p[pIdx] == '*' {
		pIdx++
	}
	return pIdx == len(p)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "aa"
	var input2 = "*"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %t\n", isMatch(input1, input2))
}
