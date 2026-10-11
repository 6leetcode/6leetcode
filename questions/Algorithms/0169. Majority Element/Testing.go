package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func majorityElement(nums []int) int {
	candidate, count := nums[0], 1
	for i := 1; i < len(nums); i++ {
		if count == 0 {
			candidate = nums[i]
			count = 1
		} else if nums[i] == candidate {
			count++
		} else {
			count--
		}
	}
	return candidate
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{-1, -1, 2147483647}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", majorityElement(input))
}
