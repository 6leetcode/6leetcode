package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maxBlackSquare(matrix [][]int) int {
	n := len(matrix)
	dp := make([][]int, n)
	for i := range dp {
		dp[i] = make([]int, n)
	}
	best := 0
	for i := 0; i < n; i++ {
		for j := 0; j < len(matrix[i]); j++ {
			if matrix[i][j] == 1 {
				if i == 0 || j == 0 {
					dp[i][j] = 1
				} else {
					m := dp[i-1][j-1]
					if dp[i-1][j] < m {
						m = dp[i-1][j]
					}
					if dp[i][j-1] < m {
						m = dp[i][j-1]
					}
					dp[i][j] = m + 1
				}
				if dp[i][j] > best {
					best = dp[i][j]
				}
			}
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	matrix := [][]int{{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}, {0, 1, 1, 1}}
	fmt.Println("Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]")
	fmt.Printf("Output: %d\n", maxBlackSquare(matrix))
}
