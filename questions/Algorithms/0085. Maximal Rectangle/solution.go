package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func largest(heights []int) int {
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

func maximalRectangle(matrix [][]byte) int {
	if len(matrix) == 0 {
		return 0
	}
	n := len(matrix[0])
	heights := make([]int, n)
	maxArea := 0
	for i := 0; i < len(matrix); i++ {
		for j := 0; j < n; j++ {
			if matrix[i][j] == '1' {
				heights[j]++
			} else {
				heights[j] = 0
			}
		}
		if a := largest(heights); a > maxArea {
			maxArea = a
		}
	}
	return maxArea
}

// ------------------------------- solution end ---------------------------------

func main() {
	raw := []string{"10100", "10111", "11111", "10010"}
	matrix := make([][]byte, len(raw))
	for i, s := range raw {
		matrix[i] = []byte(s)
	}
	fmt.Printf("Input:  %v\n", raw)
	fmt.Printf("Output: %d\n", maximalRectangle(matrix))
}
