package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func firstMissingPositive(nums []int) int {
	n := len(nums)
	for i := 0; i < n; i++ {
		for nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i] {
			nums[i], nums[nums[i]-1] = nums[nums[i]-1], nums[i]
		}
	}
	for i := 0; i < n; i++ {
		if nums[i] != i+1 {
			return i + 1
		}
	}
	return n + 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{3, 4, -1, 1}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", firstMissingPositive(input))
}
