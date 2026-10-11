package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func totalNQueens(n int) int {
	count := 0
	cols := make([]int, n)
	var isSafe func(row, col int) bool
	isSafe = func(row, col int) bool {
		for r := 0; r < row; r++ {
			if cols[r] == col || abs(cols[r]-col) == abs(r-row) {
				return false
			}
		}
		return true
	}
	var backtrack func(row int)
	backtrack = func(row int) {
		if row == n {
			count++
			return
		}
		for col := 0; col < n; col++ {
			if isSafe(row, col) {
				cols[row] = col
				backtrack(row + 1)
			}
		}
	}
	backtrack(0)
	return count
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 4
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", totalNQueens(input))
}
