package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isNumber(s string) bool {
	i, n := 0, len(s)
	for i < n && s[i] == ' ' {
		i++
	}
	for n > i && s[n-1] == ' ' {
		n--
	}
	seenDigit, seenDot, seenExp := false, false, false
	if i < n && (s[i] == '+' || s[i] == '-') {
		i++
	}
	for ; i < n; i++ {
		c := s[i]
		if c >= '0' && c <= '9' {
			seenDigit = true
		} else if c == '.' {
			if seenDot || seenExp {
				return false
			}
			seenDot = true
		} else if c == 'e' || c == 'E' {
			if seenExp || !seenDigit {
				return false
			}
			seenExp = true
			seenDigit = false
			if i+1 < n && (s[i+1] == '+' || s[i+1] == '-') {
				i++
			}
		} else {
			return false
		}
	}
	return seenDigit
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "2e10"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", isNumber(input))
}
