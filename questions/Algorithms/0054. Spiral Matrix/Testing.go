package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func spiralOrder(matrix [][]int) []int {
	if len(matrix) == 0 || len(matrix[0]) == 0 {
		return []int{}
	}
	rows, cols := len(matrix), len(matrix[0])
	order := []int{}
	left, right, top, bottom := 0, cols-1, 0, rows-1
	for left <= right && top <= bottom {
		for c := left; c <= right; c++ {
			order = append(order, matrix[top][c])
		}
		for r := top + 1; r <= bottom; r++ {
			order = append(order, matrix[r][right])
		}
		if left < right && top < bottom {
			for c := right - 1; c > left; c-- {
				order = append(order, matrix[bottom][c])
			}
			for r := bottom; r > top; r-- {
				order = append(order, matrix[r][left])
			}
		}
		left++
		right--
		top++
		bottom--
	}
	return order
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := [][]int{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
	fmt.Println("Input: ", input)
	fmt.Printf("Output: %v\n", spiralOrder(input))
}
