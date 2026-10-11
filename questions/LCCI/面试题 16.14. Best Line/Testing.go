package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func bestLine(points [][]int) []int {
	bestCount, bestI, bestJ := 2, 0, 1
	for i := 0; i < len(points); i++ {
		for j := i + 1; j < len(points); j++ {
			dx := int64(points[j][0] - points[i][0])
			dy := int64(points[j][1] - points[i][1])
			count := 2
			for k := 0; k < len(points); k++ {
				if k == i || k == j {
					continue
				}
				ddx := int64(points[k][0] - points[i][0])
				ddy := int64(points[k][1] - points[i][1])
				if dx*ddy == dy*ddx {
					count++
				}
			}
			if count > bestCount {
				bestCount = count
				bestI = i
				bestJ = j
			}
		}
	}
	return []int{bestI, bestJ}
}

// ------------------------------- solution end ---------------------------------

func main() {
	points := [][]int{{0, 0}, {1, 1}, {1, 0}, {2, 0}}
	fmt.Println("Input:  [[0,0],[1,1],[1,0],[2,0]]")
	fmt.Printf("Output: %v\n", bestLine(points))
}
