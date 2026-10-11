package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func tictactoe(board []string) string {
	n := len(board)
	win := func(ch byte) bool {
		for i := 0; i < n; i++ {
			row, col := true, true
			for j := 0; j < n; j++ {
				if board[i][j] != ch {
					row = false
				}
				if board[j][i] != ch {
					col = false
				}
			}
			if row || col {
				return true
			}
		}
		d1, d2 := true, true
		for i := 0; i < n; i++ {
			if board[i][i] != ch {
				d1 = false
			}
			if board[i][n-1-i] != ch {
				d2 = false
			}
		}
		return d1 || d2
	}
	if win('X') {
		return "X"
	}
	if win('O') {
		return "O"
	}
	for _, row := range board {
		for i := 0; i < len(row); i++ {
			if row[i] == ' ' {
				return "Pending"
			}
		}
	}
	return "Draw"
}

// ------------------------------- solution end ---------------------------------

func main() {
	board := []string{"O X", " XO", "X O"}
	fmt.Println(`Input:  ["O X", " XO", "X O"]`)
	fmt.Printf("Output: %s\n", tictactoe(board))
}
