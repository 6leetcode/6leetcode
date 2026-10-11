package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func bulbSwitch(n int) int {
	return int(math.Sqrt(float64(n)))
}

// ------------------------------- solution end ---------------------------------
func main() {
	var input = 16
	fmt.Println("Input: ", input)
	fmt.Println("Output:", bulbSwitch(input))
}
