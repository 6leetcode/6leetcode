package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func solveNQueens(n int) [][]string {
	var res [][]string
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
			board := make([]string, n)
			for i := 0; i < n; i++ {
				line := make([]byte, n)
				for j := 0; j < n; j++ {
					line[j] = '.'
				}
				line[cols[i]] = 'Q'
				board[i] = string(line)
			}
			res = append(res, board)
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
	return res
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
	fmt.Printf("Output: %v\n", solveNQueens(input))
}
