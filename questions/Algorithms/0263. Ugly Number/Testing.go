package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isUgly(num int) bool {
	if num < 1 {
		return false
	}
	for _, f := range []int{2, 3, 5} {
		for num%f == 0 {
			num /= f
		}
	}
	return num == 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 14
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %t\n", isUgly(input))
}
