package main

import (
	"fmt"
	"math"
)

func reverse(x int) int {
	rev := 0
	for x != 0 {
		pop := x % 10
		if rev > math.MaxInt32/10 || (rev < math.MinInt32/10) {
			return 0
		}
		rev = rev*10 + pop
		x /= 10
	}
	return rev
}

func main() {
	var input = 12345
	fmt.Println("Input:", input)
	fmt.Println("Output:", reverse(input))
}
