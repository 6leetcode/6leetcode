package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func massage(nums []int) int {
	prev, cur := 0, 0
	for _, x := range nums {
		take, skip := prev+x, cur
		prev = cur
		if take > skip {
			cur = take
		} else {
			cur = skip
		}
	}
	return cur
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{1, 2, 3, 1}
	fmt.Printf("Input:  %v\n", nums)
	fmt.Printf("Output: %d\n", massage(nums))
}
