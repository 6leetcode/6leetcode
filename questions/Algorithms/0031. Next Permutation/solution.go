package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func nextPermutation(nums []int) {
	i := len(nums) - 2
	for i >= 0 && nums[i] >= nums[i+1] {
		i--
	}
	if i >= 0 {
		j := len(nums) - 1
		for nums[j] <= nums[i] {
			j--
		}
		nums[i], nums[j] = nums[j], nums[i]
	}
	for l, r := i+1, len(nums)-1; l < r; l, r = l+1, r-1 {
		nums[l], nums[r] = nums[r], nums[l]
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{1, 2, 3}
	fmt.Println("Input: ", input)
	nextPermutation(input)
	fmt.Printf("Output: %v\n", input)
}
