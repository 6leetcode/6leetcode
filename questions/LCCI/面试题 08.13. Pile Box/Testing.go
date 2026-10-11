package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func pileBox(box [][]int) int {
	sort.Slice(box, func(i, j int) bool {
		if box[i][0] != box[j][0] {
			return box[i][0] < box[j][0]
		}
		return box[i][1] < box[j][1]
	})
	n := len(box)
	dp := make([]int, n)
	best := 0
	for i := 0; i < n; i++ {
		dp[i] = box[i][2]
		for j := 0; j < i; j++ {
			if box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2] {
				if dp[j]+box[i][2] > dp[i] {
					dp[i] = dp[j] + box[i][2]
				}
			}
		}
		if dp[i] > best {
			best = dp[i]
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	box := [][]int{{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}
	fmt.Println("Input:  [[1,1,1],[2,2,2],[3,3,3]]")
	fmt.Printf("Output: %d\n", pileBox(box))
}
