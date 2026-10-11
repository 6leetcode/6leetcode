package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func threeSumClosest(nums []int, target int) int {
	sort.Ints(nums)
	ans := nums[0] + nums[1] + nums[len(nums)-1]
	for i := 0; i < len(nums)-2; i++ {
		left, right := i+1, len(nums)-1
		for left < right {
			sum := nums[i] + nums[left] + nums[right]
			if abs(target-ans) > abs(target-sum) {
				ans = sum
			}
			if sum < target {
				left++
			} else {
				right--
			}
		}
	}
	return ans
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{-1, 2, 1, -4}
	var input2 = 2
	fmt.Printf("Input:  %s %d\n", helper.ArrayShow(input1), input2)
	fmt.Printf("Output: %d\n", threeSumClosest(input1, input2))
}
