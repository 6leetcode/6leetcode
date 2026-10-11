package main

import (
	"fmt"
	"sort"
	"strconv"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func largestNumber(nums []int) string {
	sort.Slice(nums, func(i, j int) bool {
		a, b := strconv.Itoa(nums[i]), strconv.Itoa(nums[j])
		return b+a > a+b
	})
	if nums[0] == 0 {
		return "0"
	}
	var sb strings.Builder
	for _, x := range nums {
		sb.WriteString(strconv.Itoa(x))
	}
	return sb.String()
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{3, 30, 34, 5, 9}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %s\n", largestNumber(input))
}
