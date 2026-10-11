package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func lengthOfLIS(nums []int) int {
	tails := []int{}
	for _, num := range nums {
		i := sort.SearchInts(tails, num)
		if i == len(tails) {
			tails = append(tails, num)
		} else {
			tails[i] = num
		}
	}
	return len(tails)
}

// ------------------------------- solution end ---------------------------------

func main() {
	inputs := [][]int{
		{10, 9, 2, 5, 3, 7, 101, 18},
		{0, 1, 0, 3, 2, 3},
		{7, 7, 7, 7, 7},
	}
	for _, input := range inputs {
		fmt.Printf("Input:  %v\n", input)
		fmt.Printf("Output: %d\n", lengthOfLIS(input))
	}
}
