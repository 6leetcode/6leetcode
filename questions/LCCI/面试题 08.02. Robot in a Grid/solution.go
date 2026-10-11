package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func pathWithObstacles(obstacleGrid [][]int) [][]int {
	rows, cols := len(obstacleGrid), len(obstacleGrid[0])
	visited := make([][]bool, rows)
	for i := range visited {
		visited[i] = make([]bool, cols)
	}
	var path [][]int
	var dfs func(r, c int) bool
	dfs = func(r, c int) bool {
		if r >= rows || c >= cols || obstacleGrid[r][c] == 1 || visited[r][c] {
			return false
		}
		visited[r][c] = true
		if (r == rows-1 && c == cols-1) || dfs(r+1, c) || dfs(r, c+1) {
			path = append(path, []int{r, c})
			return true
		}
		return false
	}
	if !dfs(0, 0) {
		return [][]int{}
	}
	for i, j := 0, len(path)-1; i < j; i, j = i+1, j-1 {
		path[i], path[j] = path[j], path[i]
	}
	return path
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := [][]int{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}}
	fmt.Println("Input:  [[0,0,0],[0,1,0],[0,0,0]]")
	fmt.Printf("Output: %s\n", helper.MatrixShow(pathWithObstacles(input)))
}
