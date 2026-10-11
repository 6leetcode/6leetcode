package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maxSubArray(nums []int) int {
	pre, maxAns := 0, nums[0]
	for _, x := range nums {
		if pre+x > x {
			pre += x
		} else {
			pre = x
		}
		if pre > maxAns {
			maxAns = pre
		}
	}
	return maxAns
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{-2, 1, -3, 4, -1, 2, 1, -5, 4}
	fmt.Printf("Input:  %v\n", nums)
	fmt.Printf("Output: %d\n", maxSubArray(nums))
}
