package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func exist(board [][]byte, word string) bool {
	rows, cols := len(board), len(board[0])
	var dfs func(i, j, idx int) bool
	dfs = func(i, j, idx int) bool {
		if idx == len(word) {
			return true
		}
		if i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != word[idx] {
			return false
		}
		tmp := board[i][j]
		board[i][j] = '#'
		found := dfs(i+1, j, idx+1) || dfs(i-1, j, idx+1) || dfs(i, j+1, idx+1) || dfs(i, j-1, idx+1)
		board[i][j] = tmp
		return found
	}
	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			if dfs(i, j, 0) {
				return true
			}
		}
	}
	return false
}

// ------------------------------- solution end ---------------------------------

func main() {
	raw := []string{"ABCE", "SFCS", "ADEE"}
	board := make([][]byte, len(raw))
	for i, s := range raw {
		board[i] = []byte(s)
	}
	var word = "ABCCED"
	fmt.Printf("Input:  %v %s\n", raw, word)
	fmt.Printf("Output: %t\n", exist(board, word))
}
