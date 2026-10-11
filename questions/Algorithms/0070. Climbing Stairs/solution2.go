package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func climbStairs(n int) int {
	// with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
	s := math.Sqrt(5)
	return int(math.Floor((math.Pow((1+s)/2, float64(n+1))+math.Pow((1-s)/2, float64(n+1)))/s + 0.5))
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 10
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", climbStairs(input))
}
