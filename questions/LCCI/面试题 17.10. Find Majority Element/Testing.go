package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func majorityElement(nums []int) int {
	candidate, count := nums[0], 0
	for _, x := range nums {
		if count == 0 {
			candidate = x
		}
		if x == candidate {
			count++
		} else {
			count--
		}
	}
	c := 0
	for _, x := range nums {
		if x == candidate {
			c++
		}
	}
	if c > len(nums)/2 {
		return candidate
	}
	return -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{1, 2, 5, 9, 5, 9, 5, 5, 5}
	fmt.Printf("Input:  %v\n", nums)
	fmt.Printf("Output: %d\n", majorityElement(nums))
}
