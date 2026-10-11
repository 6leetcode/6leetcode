package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func searchInsert(nums []int, target int) int {
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

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{1, 3, 5, 6}
	var input2 = 5
	fmt.Printf("Input:  %v %d\n", input1, input2)
	fmt.Printf("Output: %d\n", searchInsert(input1, input2))
}
