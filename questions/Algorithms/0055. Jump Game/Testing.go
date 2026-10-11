package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func canJump(nums []int) bool {
	rightmost := 0
	for i := 0; i < len(nums); i++ {
		if i <= rightmost {
			if i+nums[i] > rightmost {
				rightmost = i + nums[i]
			}
			if rightmost >= len(nums)-1 {
				return true
			}
		}
	}
	return false
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{3, 2, 1, 0, 4}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %t\n", canJump(input))
}
