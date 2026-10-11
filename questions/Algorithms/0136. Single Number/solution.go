package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func singleNumber(nums []int) int {
	result := 0
	for _, num := range nums {
		result ^= num
	}
	return result
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{4, 1, 2, 1, 2}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", singleNumber(input))
}
