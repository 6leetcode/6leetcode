package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func largestRectangleArea(heights []int) int {
	stack := []int{}
	maxArea := 0
	n := len(heights)
	for i := 0; i <= n; i++ {
		h := 0
		if i < n {
			h = heights[i]
		}
		for len(stack) > 0 && heights[stack[len(stack)-1]] > h {
			height := heights[stack[len(stack)-1]]
			stack = stack[:len(stack)-1]
			width := i
			if len(stack) > 0 {
				width = i - stack[len(stack)-1] - 1
			}
			if height*width > maxArea {
				maxArea = height * width
			}
		}
		stack = append(stack, i)
	}
	return maxArea
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{2, 1, 5, 6, 2, 3}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", largestRectangleArea(input))
}
