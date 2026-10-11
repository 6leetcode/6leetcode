package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func waysToStep(n int) int {
	const MOD = 1000000007
	if n == 1 {
		return 1
	}
	if n == 2 {
		return 2
	}
	if n == 3 {
		return 4
	}
	a, b, c := 1, 2, 4
	for i := 4; i <= n; i++ {
		d := (a + b + c) % MOD
		a, b, c = b, c, d
	}
	return c
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 5
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", waysToStep(input))
}
