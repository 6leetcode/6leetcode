package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func canWinNim(n int) bool {
	return n%4 == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input int = 4
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %t\n", canWinNim(input))
}
