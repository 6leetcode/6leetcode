package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func jump(nums []int) int {
	jumps, curEnd, farthest := 0, 0, 0
	for i := 0; i < len(nums)-1; i++ {
		if i+nums[i] > farthest {
			farthest = i + nums[i]
		}
		if i == curEnd {
			jumps++
			curEnd = farthest
		}
	}
	return jumps
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{2, 3, 1, 1, 4}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", jump(input))
}
