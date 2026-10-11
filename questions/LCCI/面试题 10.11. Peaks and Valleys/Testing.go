package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func wiggleSort(nums []int) {
	sort.Ints(nums)
	for i := 0; i+1 < len(nums); i += 2 {
		nums[i], nums[i+1] = nums[i+1], nums[i]
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{5, 3, 1, 2, 3}
	fmt.Printf("Input:  %v\n", input)
	wiggleSort(input)
	fmt.Printf("Output: %v\n", input)
}
