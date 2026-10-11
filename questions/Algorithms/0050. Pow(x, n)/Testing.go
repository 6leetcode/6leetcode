package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func myPow(x float64, n int) float64 {
	e := int64(n)
	if e < 0 {
		x = 1 / x
		e = -e
	}
	res := 1.0
	for e > 0 {
		if e&1 == 1 {
			res *= x
		}
		x *= x
		e >>= 1
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = 2.0
	var input2 = 10
	fmt.Printf("Input:  %g %d\n", input1, input2)
	fmt.Printf("Output: %g\n", myPow(input1, input2))
}
