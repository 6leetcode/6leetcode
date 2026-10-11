package main

import (
	"fmt"
	"math/bits"
)

// ------------------------------- solution begin -------------------------------
func convertInteger(A int, B int) int {
	return bits.OnesCount32(uint32(A) ^ uint32(B))
}

// ------------------------------- solution end ---------------------------------

func main() {
	var A, B = 29, 15
	fmt.Printf("Input:  A = %d, B = %d\n", A, B)
	fmt.Printf("Output: %d\n", convertInteger(A, B))
}
