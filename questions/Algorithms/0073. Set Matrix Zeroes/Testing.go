package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func setZeroes(matrix [][]int) {
	m, n := len(matrix), len(matrix[0])
	firstRow, firstCol := false, false
	for j := 0; j < n; j++ {
		if matrix[0][j] == 0 {
			firstRow = true
		}
	}
	for i := 0; i < m; i++ {
		if matrix[i][0] == 0 {
			firstCol = true
		}
	}
	for i := 1; i < m; i++ {
		for j := 1; j < n; j++ {
			if matrix[i][j] == 0 {
				matrix[i][0] = 0
				matrix[0][j] = 0
			}
		}
	}
	for i := 1; i < m; i++ {
		for j := 1; j < n; j++ {
			if matrix[i][0] == 0 || matrix[0][j] == 0 {
				matrix[i][j] = 0
			}
		}
	}
	if firstRow {
		for j := 0; j < n; j++ {
			matrix[0][j] = 0
		}
	}
	if firstCol {
		for i := 0; i < m; i++ {
			matrix[i][0] = 0
		}
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := [][]int{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}
	fmt.Printf("Input:  %s\n", helper.MatrixShow(input))
	setZeroes(input)
	fmt.Printf("Output: %s\n", helper.MatrixShow(input))
}
