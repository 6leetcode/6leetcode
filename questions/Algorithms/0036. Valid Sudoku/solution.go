package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isValidSudoku(board [][]byte) bool {
	var rows, cols, boxes [9][9]bool
	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			c := board[i][j]
			if c == '.' {
				continue
			}
			d := c - '1'
			b := i/3*3 + j/3
			if rows[i][d] || cols[j][d] || boxes[b][d] {
				return false
			}
			rows[i][d], cols[j][d], boxes[b][d] = true, true, true
		}
	}
	return true
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
	fmt.Printf("Output: %t\n", isValidSudoku(board))
}
