package main

import (
	"fmt"
	"sort"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func pairSums(nums []int, target int) [][]int {
	sort.Ints(nums)
	res := [][]int{}
	i, j := 0, len(nums)-1
	for i < j {
		sum := nums[i] + nums[j]
		if sum < target {
			i++
		} else if sum > target {
			j--
		} else {
			res = append(res, []int{nums[i], nums[j]})
			i++
			j--
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{5, 6, 5, 6}
	target := 11
	fmt.Println("Input:  nums = [5,6,5,6], target = 11")
	fmt.Printf("Output: %s\n", helper.MatrixShow(pairSums(nums, target)))
}
