package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func getMaxMatrix(matrix [][]int) []int {
	rows, cols := len(matrix), len(matrix[0])
	best := int64(-1) << 62
	res := []int{0, 0, 0, 0}
	for top := 0; top < rows; top++ {
		colSum := make([]int, cols)
		for bottom := top; bottom < rows; bottom++ {
			for j := 0; j < cols; j++ {
				colSum[j] += matrix[bottom][j]
			}
			cur := int64(0)
			start := 0
			for j := 0; j < cols; j++ {
				if cur <= 0 {
					cur = int64(colSum[j])
					start = j
				} else {
					cur += int64(colSum[j])
				}
				if cur > best {
					best = cur
					res = []int{top, start, bottom, j}
				}
			}
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	matrix := [][]int{{-1, 0, 0}, {0, -1, 0}}
	fmt.Println("Input:  [[-1,0,0],[0,-1,0]]")
	fmt.Printf("Output: %v\n", getMaxMatrix(matrix))
}
