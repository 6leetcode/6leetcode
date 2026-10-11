package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func mySqrt(x int) int {
	r := int(math.Sqrt(float64(x)))
	for (r+1)*(r+1) <= x {
		r++
	}
	for r*r > x {
		r--
	}
	return r
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 8
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", mySqrt(input))
}
