package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func countSmaller(nums []int) []int {
	res := make([]int, len(nums))
	for i := 0; i < len(nums); i++ {
		count := 0
		for j := i + 1; j < len(nums); j++ {
			if nums[j] < nums[i] {
				count++
			}
		}
		res[i] = count
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{5, 2, 6, 1}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %v\n", countSmaller(input))
}
