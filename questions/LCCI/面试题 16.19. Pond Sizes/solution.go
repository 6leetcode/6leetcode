package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func pondSizes(land [][]int) []int {
	rows, cols := len(land), len(land[0])
	var dfs func(r, c int) int
	dfs = func(r, c int) int {
		if r < 0 || r >= rows || c < 0 || c >= cols || land[r][c] != 0 {
			return 0
		}
		land[r][c] = -1
		size := 1
		for dr := -1; dr <= 1; dr++ {
			for dc := -1; dc <= 1; dc++ {
				if dr != 0 || dc != 0 {
					size += dfs(r+dr, c+dc)
				}
			}
		}
		return size
	}
	res := []int{}
	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			if land[i][j] == 0 {
				res = append(res, dfs(i, j))
			}
		}
	}
	sort.Ints(res)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	land := [][]int{{0, 2, 1, 0}, {0, 1, 0, 1}, {1, 1, 0, 1}, {0, 1, 0, 1}}
	fmt.Println("Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]")
	fmt.Printf("Output: %v\n", pondSizes(land))
}
