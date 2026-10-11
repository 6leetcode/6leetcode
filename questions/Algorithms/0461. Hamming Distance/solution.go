package main

import (
	"fmt"
	"math/bits"
)

// -------------------------------solution begin-------------------------------
func hammingDistance(x, y int) int {
	return bits.OnesCount(uint(x ^ y))
}

// -------------------------------solution end---------------------------------

func main() {
	var input1, input2 = 1, 4
	fmt.Printf("Input:  %d, %d\n", input1, input2)
	fmt.Printf("Output: %d\n", hammingDistance(input1, input2))
}
