package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func sortColors(nums []int) {
	ptr := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] == 0 {
			nums[i], nums[ptr] = nums[ptr], nums[i]
			ptr++
		}
	}
	for i := ptr; i < len(nums); i++ {
		if nums[i] == 1 {
			nums[i], nums[ptr] = nums[ptr], nums[i]
			ptr++
		}
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{2, 0, 2, 1, 1, 0}
	fmt.Printf("Input:  %v\n", input)
	sortColors(input)
	fmt.Printf("Output: %v\n", input)
}
