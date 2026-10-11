package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func generateMatrix(n int) [][]int {
	m := make([][]int, n)
	for i := range m {
		m[i] = make([]int, n)
	}
	top, bottom, left, right, num := 0, n-1, 0, n-1, 1
	for top <= bottom && left <= right {
		for c := left; c <= right; c++ {
			m[top][c] = num
			num++
		}
		top++
		for r := top; r <= bottom; r++ {
			m[r][right] = num
			num++
		}
		right--
		if top <= bottom {
			for c := right; c >= left; c-- {
				m[bottom][c] = num
				num++
			}
			bottom--
		}
		if left <= right {
			for r := bottom; r >= top; r-- {
				m[r][left] = num
				num++
			}
			left++
		}
	}
	return m
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 3
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %s\n", helper.MatrixShow(generateMatrix(input)))
}
