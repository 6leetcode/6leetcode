package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func singleNumber(nums []int) int {
	ones, twos := 0, 0
	for _, num := range nums {
		ones = ones ^ num&^twos
		twos = twos ^ num&^ones
	}
	return ones
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{0, 1, 0, 1, 0, 1, 99}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", singleNumber(input))
}
