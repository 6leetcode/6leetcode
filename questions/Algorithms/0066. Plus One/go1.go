package main

import "fmt"

func plusOne(digits []int) []int {
	for i := len(digits) - 1; i >= 0; i-- {
		if digits[i] == 9 {
			digits[i] = 0
		} else {
			digits[i] = digits[i] + 1
			break
		}
	}

	if digits[0] == 0 {
		var ans = make([]int, len(digits)+1)
		ans[0] = 1
		return ans
	}
	return digits
}

func main() {
	var digits = []int{1, 2, 3}
	fmt.Printf("Input:  %v\n", digits)
	fmt.Printf("Output: %v\n", plusOne(digits))
}
