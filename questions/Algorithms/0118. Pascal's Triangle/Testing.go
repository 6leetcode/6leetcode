package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func generate(numRows int) [][]int {
	ans := make([][]int, numRows)
	for i := 0; i < numRows; i++ {
		ans[i] = make([]int, i+1)
		ans[i][0], ans[i][i] = 1, 1
		for j := 1; j < i; j++ {
			ans[i][j] = ans[i-1][j-1] + ans[i-1][j]
		}
	}
	return ans
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 5
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %s\n", helper.MatrixShow(generate(input)))
}
