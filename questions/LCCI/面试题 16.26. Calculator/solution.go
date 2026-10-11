package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func calculate(s string) int {
	result, prev, cur := 0, 0, 0
	op := byte('+')
	n := len(s)
	for i := 0; i <= n; i++ {
		if i < n && s[i] >= '0' && s[i] <= '9' {
			cur = cur*10 + int(s[i]-'0')
		} else if i == n || s[i] != ' ' {
			switch op {
			case '+':
				result += prev
				prev = cur
			case '-':
				result += prev
				prev = -cur
			case '*':
				prev *= cur
			case '/':
				prev /= cur
			}
			if i < n {
				op = s[i]
			}
			cur = 0
		}
	}
	return result + prev
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "3+2*2"
	fmt.Printf("Input:  %q\n", input)
	fmt.Printf("Output: %d\n", calculate(input))
}
