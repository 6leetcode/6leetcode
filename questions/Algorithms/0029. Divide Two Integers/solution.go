package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func divide(dividend int, divisor int) int {
	if dividend == math.MinInt32 && divisor == -1 {
		return math.MaxInt32
	}
	a, b := int64(dividend), int64(divisor)
	sign := int64(1)
	if a < 0 {
		a = -a
		sign = -sign
	}
	if b < 0 {
		b = -b
		sign = -sign
	}
	var res int64
	for a >= b {
		temp, multiple := b, int64(1)
		for a >= temp<<1 {
			temp <<= 1
			multiple <<= 1
		}
		a -= temp
		res += multiple
	}
	return int(sign * res)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = 10
	var input2 = 3
	fmt.Printf("Input:  %d %d\n", input1, input2)
	fmt.Printf("Output: %d\n", divide(input1, input2))
}
