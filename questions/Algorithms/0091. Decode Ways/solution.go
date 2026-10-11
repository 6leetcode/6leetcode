package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func numDecodings(s string) int {
	if len(s) == 0 || s[0] == '0' {
		return 0
	}
	pre, cur := 1, 1
	for i := 1; i < len(s); i++ {
		tmp := cur
		if s[i] == '0' {
			if s[i-1] == '1' || s[i-1] == '2' {
				cur = pre
			} else {
				return 0
			}
		} else if s[i-1] == '1' || (s[i-1] == '2' && s[i] >= '1' && s[i] <= '6') {
			cur = cur + pre
		}
		pre = tmp
	}
	return cur
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "226"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", numDecodings(input))
}
