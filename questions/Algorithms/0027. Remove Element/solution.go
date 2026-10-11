package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func removeElement(nums []int, val int) int {
	i := 0
	for j := 0; j < len(nums); j++ {
		if nums[j] != val {
			nums[i] = nums[j]
			i++
		}
	}
	return i
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{3, 2, 2, 3}
	var input2 = 3
	fmt.Printf("Input:  %v %d\n", input1, input2)
	k := removeElement(input1, input2)
	fmt.Printf("Output: %d, %v\n", k, input1[:k])
}
