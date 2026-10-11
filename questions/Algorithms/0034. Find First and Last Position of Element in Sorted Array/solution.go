package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func lowerBound(nums []int, target int) int {
	lo, hi := 0, len(nums)
	for lo < hi {
		mid := lo + (hi-lo)/2
		if nums[mid] < target {
			lo = mid + 1
		} else {
			hi = mid
		}
	}
	return lo
}

func searchRange(nums []int, target int) []int {
	lo := lowerBound(nums, target)
	hi := lowerBound(nums, target+1) - 1
	if lo < len(nums) && nums[lo] == target {
		return []int{lo, hi}
	}
	return []int{-1, -1}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{5, 7, 7, 8, 8, 10}
	var input2 = 8
	fmt.Printf("Input:  %v %d\n", input1, input2)
	fmt.Printf("Output: %v\n", searchRange(input1, input2))
}
