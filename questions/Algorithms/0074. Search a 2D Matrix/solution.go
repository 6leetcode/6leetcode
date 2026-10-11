package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func searchMatrix(matrix [][]int, target int) bool {
	if len(matrix) == 0 {
		return false
	}
	i, j := 0, len(matrix[0])-1
	for i < len(matrix) && j >= 0 {
		if matrix[i][j] == target {
			return true
		} else if matrix[i][j] > target {
			j--
		} else {
			i++
		}
	}
	return false
}

// ------------------------------- solution end ---------------------------------

func main() {
	input1 := [][]int{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}}
	input2 := 11
	fmt.Printf("Input:  %v %d\n", input1, input2)
	fmt.Printf("Output: %t\n", searchMatrix(input1, input2))
}
