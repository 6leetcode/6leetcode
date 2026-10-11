package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func search(nums []int, target int) bool {
	lo, hi := 0, len(nums)-1
	for lo <= hi {
		mid := lo + (hi-lo)/2
		if nums[mid] == target {
			return true
		}
		if nums[lo] == nums[mid] && nums[mid] == nums[hi] {
			lo++
			hi--
		} else if nums[lo] <= nums[mid] {
			if nums[lo] <= target && target < nums[mid] {
				hi = mid - 1
			} else {
				lo = mid + 1
			}
		} else {
			if nums[mid] < target && target <= nums[hi] {
				lo = mid + 1
			} else {
				hi = mid - 1
			}
		}
	}
	return false
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{2, 5, 6, 0, 0, 1, 2}
	var target = 0
	fmt.Printf("Input:  %v %d\n", input, target)
	fmt.Printf("Output: %t\n", search(input, target))
}
