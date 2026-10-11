package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func solveSudoku(board [][]byte) {
	var rows, cols, boxes [9][9]bool
	var empties [][2]int
	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			if board[i][j] == '.' {
				empties = append(empties, [2]int{i, j})
			} else {
				d := board[i][j] - '1'
				rows[i][d] = true
				cols[j][d] = true
				boxes[i/3*3+j/3][d] = true
			}
		}
	}
	var solve func(idx int) bool
	solve = func(idx int) bool {
		if idx == len(empties) {
			return true
		}
		i, j := empties[idx][0], empties[idx][1]
		b := i/3*3 + j/3
		for d := byte(0); d < 9; d++ {
			if !rows[i][d] && !cols[j][d] && !boxes[b][d] {
				board[i][j] = d + '1'
				rows[i][d], cols[j][d], boxes[b][d] = true, true, true
				if solve(idx + 1) {
					return true
				}
				rows[i][d], cols[j][d], boxes[b][d] = false, false, false
				board[i][j] = '.'
			}
		}
		return false
	}
	solve(0)
}

// ------------------------------- solution end ---------------------------------

func main() {
	raw := []string{
		"..9748...",
		"7........",
		".2.1.9...",
		"..7...24.",
		".64.1.59.",
		".98...3..",
		"...8.3.2.",
		"........6",
		"...2759..",
	}
	board := make([][]byte, 9)
	input := ""
	for i, s := range raw {
		board[i] = []byte(s)
		input += s
	}
	fmt.Printf("Input:  %s\n", input)
	solveSudoku(board)
	output := ""
	for _, row := range board {
		output += string(row)
	}
	fmt.Printf("Output: %s\n", output)
}
