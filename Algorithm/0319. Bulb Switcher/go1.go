package main

import (
	"fmt"
	"math"
)

func bulbSwitch(n int) int {
    return int(math.Sqrt(float64(n)))
}

func main() {
	var input = 16
	fmt.Println("Input: ", input)
	fmt.Println("Output:", bulbSwitch(input))
}
