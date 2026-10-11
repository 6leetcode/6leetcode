package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func moveZeroes(nums []int) {
	left := 0
	for right := 0; right < len(nums); right++ {
		if nums[right] != 0 {
			nums[left], nums[right] = nums[right], nums[left]
			left++
		}
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{0, 1, 0, 3, 12}
	fmt.Printf("Input:  %v\n", input)
	moveZeroes(input)
	fmt.Printf("Output: %v\n", input)
}
