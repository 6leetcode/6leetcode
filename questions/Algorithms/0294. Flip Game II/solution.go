package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func canWin(s string) bool {
	b := []byte(s)
	var win func() bool
	win = func() bool {
		for i := 1; i < len(b); i++ {
			if b[i] == '+' && b[i-1] == '+' {
				b[i], b[i-1] = '-', '-'
				ok := !win()
				b[i], b[i-1] = '+', '+'
				if ok {
					return true
				}
			}
		}
		return false
	}
	return win()
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "++++"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", canWin(input))
}
