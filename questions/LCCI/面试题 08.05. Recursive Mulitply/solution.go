package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func multiply(A int, B int) int {
	if A < B {
		return multiply(B, A)
	}
	if B == 0 {
		return 0
	}
	if B == 1 {
		return A
	}
	if B&1 == 1 {
		return A + multiply(A, B-1)
	}
	return multiply(A<<1, B>>1)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var A, B = 3, 4
	fmt.Printf("Input:  A = %d, B = %d\n", A, B)
	fmt.Printf("Output: %d\n", multiply(A, B))
}
