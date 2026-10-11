package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func missingNumber(nums []int) int {
	res := len(nums)
	for i, x := range nums {
		res ^= i ^ x
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{9, 6, 4, 2, 3, 5, 7, 0, 1}
	fmt.Printf("Input:  %v\n", nums)
	fmt.Printf("Output: %d\n", missingNumber(nums))
}
