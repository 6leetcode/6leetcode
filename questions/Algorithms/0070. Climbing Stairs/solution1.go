package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func climbStairs(n int) int {
	prev, cur := 0, 1
	for i := 1; i <= n; i++ {
		prev, cur = cur, prev+cur
	}
	return cur
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 10
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", climbStairs(input))
}
