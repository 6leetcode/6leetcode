package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func floodFill(image [][]int, sr int, sc int, newColor int) [][]int {
	oldColor := image[sr][sc]
	if oldColor == newColor {
		return image
	}
	rows, cols := len(image), len(image[0])
	var dfs func(r, c int)
	dfs = func(r, c int) {
		if r < 0 || r >= rows || c < 0 || c >= cols || image[r][c] != oldColor {
			return
		}
		image[r][c] = newColor
		dfs(r+1, c)
		dfs(r-1, c)
		dfs(r, c+1)
		dfs(r, c-1)
	}
	dfs(sr, sc)
	return image
}

// ------------------------------- solution end ---------------------------------

func main() {
	image := [][]int{{1, 1, 1}, {1, 1, 0}, {1, 0, 1}}
	fmt.Println("Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2")
	fmt.Printf("Output: %s\n", helper.MatrixShow(floodFill(image, 1, 1, 2)))
}
