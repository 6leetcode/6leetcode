package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func solve(board [][]byte) {
	if len(board) == 0 {
		return
	}
	rows, cols := len(board), len(board[0])

	var dfs func(i, j int)
	dfs = func(i, j int) {
		if i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != 'O' {
			return
		}
		board[i][j] = '#'
		dfs(i+1, j)
		dfs(i-1, j)
		dfs(i, j+1)
		dfs(i, j-1)
	}

	for i := 0; i < rows; i++ {
		dfs(i, 0)
		dfs(i, cols-1)
	}
	for j := 0; j < cols; j++ {
		dfs(0, j)
		dfs(rows-1, j)
	}

	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			if board[i][j] == 'O' {
				board[i][j] = 'X'
			} else if board[i][j] == '#' {
				board[i][j] = 'O'
			}
		}
	}
}

// ------------------------------- solution end ---------------------------------

func showBoard(board [][]byte) string {
	var sb strings.Builder
	sb.WriteString("[")
	for i, row := range board {
		if i > 0 {
			sb.WriteString(", ")
		}
		sb.WriteString("[")
		for j, ch := range row {
			if j > 0 {
				sb.WriteString(", ")
			}
			sb.WriteByte(ch)
		}
		sb.WriteString("]")
	}
	sb.WriteString("]")
	return sb.String()
}

func toBoard(raw []string) [][]byte {
	board := make([][]byte, len(raw))
	for i, s := range raw {
		board[i] = []byte(s)
	}
	return board
}

func main() {
	b1 := toBoard([]string{"XXXX", "XOOX", "XXOX", "XOXX"})
	fmt.Printf("Input:  %s\n", showBoard(b1))
	solve(b1)
	fmt.Printf("Output: %s\n", showBoard(b1))

	b2 := toBoard([]string{"X"})
	fmt.Printf("Input:  %s\n", showBoard(b2))
	solve(b2)
	fmt.Printf("Output: %s\n", showBoard(b2))
}
