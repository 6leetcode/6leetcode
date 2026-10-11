package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func numberOfSubstrings(s string) int {
	a, b, c, l, ans := 0, 0, 0, 0, 0
	for r := 0; r < len(s); r++ {
		if s[r] == 'a' {
			a++
		}
		if s[r] == 'b' {
			b++
		}
		if s[r] == 'c' {
			c++
		}
		for a > 1 || b > 1 || c > 1 {
			if s[l] == 'a' && a > 1 {
				a--
				l++
			} else if s[l] == 'b' && b > 1 {
				b--
				l++
			} else if s[l] == 'c' && c > 1 {
				c--
				l++
			} else {
				break
			}
		}
		if a > 0 && b > 0 && c > 0 {
			ans += l + 1
		}
	}
	return ans
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "abcabc"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", numberOfSubstrings(input))
}
