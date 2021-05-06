package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func threeSum(nums []int) [][]int {
	sort.Ints(nums)
	var res [][]int
	for i := 0; i < len(nums)-2; i++ {
		if nums[i] > 0 {
			break
		}
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}
		for l, r := i+1, len(nums)-1; l < r; {
			if l > i+1 && nums[l] == nums[l-1] {
				l++
				continue
			}
			if r < len(nums)-1 && nums[r] == nums[r+1] {
				r--
				continue
			}
			switch sum := nums[i] + nums[l] + nums[r]; {
			case sum < 0:
				l++
			case sum > 0:
				r--
			default:
				res = append(res, []int{nums[i], nums[l], nums[r]})
				l++
				r--
			}
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{4, -10, -11, -12, -8, -12, -14, -11, -6, 2, -4, 2, 3, 12, -3, -12, -14, -12, -8, -9, -6, -3, 10, 2, 14, 10, 7, -7, -9, 0, -9, 10, -2, -5, 14, 5, -9, 7, 9, 0, -14, 12, 10, 4, 9, -8, 8, 11, -5, -15, -13, -3, -11, 4, 14, 11, -1, -2, -11, 5, 14, -4, -8, -3, 6, -9, 9, 12, 6, 3, -10, 7, 0, -15, -3, -13, -8, 12, 13, -5, 12, -15, 7, 8, -4, -2, 4, 2, 3, 9, -8, 2, -10, -1, 6, 3, -2, 0, -7, 11, -12, -2, 3, -4, -2, 7, -2, -3, 4, -12, -1, 1, 10, 13, -5, -9, -12, 6, 8, 7, 0, 7, -6, 5, 13, 8, -14, -12}
	fmt.Printf("Input:  %s\n", helper.ArrayShow(input))
	fmt.Printf("Output: %s\n", helper.MatrixShow(threeSum(input)))
}
