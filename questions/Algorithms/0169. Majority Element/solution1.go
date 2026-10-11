package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func majorityElement(nums []int) int {
	sort.Ints(nums)
	return nums[len(nums)/2]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{-1, -1, 2147483647}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", majorityElement(input))
}
