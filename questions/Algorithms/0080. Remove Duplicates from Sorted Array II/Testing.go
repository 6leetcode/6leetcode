package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func removeDuplicates(nums []int) int {
	if len(nums) <= 2 {
		return len(nums)
	}
	i := 2
	for j := 2; j < len(nums); j++ {
		if nums[j] != nums[i-2] {
			nums[i] = nums[j]
			i++
		}
	}
	return i
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{1, 1, 1, 2, 2, 3}
	fmt.Printf("Input:  %v\n", input)
	k := removeDuplicates(input)
	fmt.Printf("Output: %d, %v\n", k, input[:k])
}
