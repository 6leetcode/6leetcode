package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func removeDuplicates(nums []int) int {
	if len(nums) == 0 {
		return 0
	}
	i := 0
	for j := 1; j < len(nums); j++ {
		if nums[j] != nums[i] {
			i++
			nums[i] = nums[j]
		}
	}
	return i + 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}
	fmt.Println("Input: ", input)
	k := removeDuplicates(input)
	fmt.Printf("Output: %d, %v\n", k, input[:k])
}
