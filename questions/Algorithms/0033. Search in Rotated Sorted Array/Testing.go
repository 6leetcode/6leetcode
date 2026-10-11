package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func search(nums []int, target int) int {
	lo, hi := 0, len(nums)-1
	for lo <= hi {
		mid := lo + (hi-lo)/2
		if nums[mid] == target {
			return mid
		}
		if nums[lo] <= nums[mid] {
			if target >= nums[lo] && target < nums[mid] {
				hi = mid - 1
			} else {
				lo = mid + 1
			}
		} else {
			if target > nums[mid] && target <= nums[hi] {
				lo = mid + 1
			} else {
				hi = mid - 1
			}
		}
	}
	return -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{4, 5, 6, 7, 0, 1, 2}
	var input2 = 0
	fmt.Printf("Input:  %v %d\n", input1, input2)
	fmt.Printf("Output: %d\n", search(input1, input2))
}
