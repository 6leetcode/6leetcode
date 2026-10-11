package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findMagicIndex(nums []int) int {
	var search func(lo, hi int) int
	search = func(lo, hi int) int {
		if lo > hi {
			return -1
		}
		mid := lo + (hi-lo)/2
		if nums[mid] == mid {
			return mid
		}
		leftHi := mid - 1
		if nums[mid] < leftHi {
			leftHi = nums[mid]
		}
		if res := search(lo, leftHi); res != -1 {
			return res
		}
		rightLo := mid + 1
		if nums[mid] > rightLo {
			rightLo = nums[mid]
		}
		return search(rightLo, hi)
	}
	return search(0, len(nums)-1)
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{1, 1, 1}
	fmt.Println("Input:  [1, 1, 1]")
	fmt.Printf("Output: %d\n", findMagicIndex(nums))
}
