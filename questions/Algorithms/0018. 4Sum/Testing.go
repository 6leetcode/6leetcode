package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func fourSum(nums []int, target int) [][]int {
	sort.Ints(nums)
	var res [][]int
	n := len(nums)
	for i := 0; i < n-3; i++ {
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}
		for j := i + 1; j < n-2; j++ {
			if j > i+1 && nums[j] == nums[j-1] {
				continue
			}
			left, right := j+1, n-1
			for left < right {
				sum := nums[i] + nums[j] + nums[left] + nums[right]
				if sum < target {
					left++
				} else if sum > target {
					right--
				} else {
					res = append(res, []int{nums[i], nums[j], nums[left], nums[right]})
					for left < right && nums[left] == nums[left+1] {
						left++
					}
					for left < right && nums[right] == nums[right-1] {
						right--
					}
					left++
					right--
				}
			}
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{1, 0, -1, 0, -2, 2}
	var input2 = 0
	fmt.Printf("Input:  %s %d\n", helper.ArrayShow(input1), input2)
	fmt.Printf("Output: %s\n", helper.MatrixShow(fourSum(input1, input2)))
}
