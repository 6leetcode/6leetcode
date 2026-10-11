package main

import (
	"fmt"
	"math"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func onSegment(p, a, b []int) bool {
	cross := float64(b[0]-a[0])*float64(p[1]-a[1]) - float64(b[1]-a[1])*float64(p[0]-a[0])
	if math.Abs(cross) > 1e-9 {
		return false
	}
	return p[0] >= min(a[0], b[0]) && p[0] <= max(a[0], b[0]) && p[1] >= min(a[1], b[1]) && p[1] <= max(a[1], b[1])
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func intersection(start1 []int, end1 []int, start2 []int, end2 []int) []float64 {
	x1, y1 := float64(start1[0]), float64(start1[1])
	x2, y2 := float64(end1[0]), float64(end1[1])
	x3, y3 := float64(start2[0]), float64(start2[1])
	x4, y4 := float64(end2[0]), float64(end2[1])
	d := (x1-x2)*(y3-y4) - (y1-y2)*(x3-x4)
	if math.Abs(d) > 1e-12 {
		t := ((x1-x3)*(y3-y4) - (y1-y3)*(x3-x4)) / d
		u := ((x1-x3)*(y1-y2) - (y1-y3)*(x1-x2)) / d
		if t >= -1e-9 && t <= 1+1e-9 && u >= -1e-9 && u <= 1+1e-9 {
			return []float64{x1 + t*(x2-x1), y1 + t*(y2-y1)}
		}
		return []float64{}
	}
	var candidates [][]int
	if onSegment(start1, start2, end2) {
		candidates = append(candidates, start1)
	}
	if onSegment(end1, start2, end2) {
		candidates = append(candidates, end1)
	}
	if onSegment(start2, start1, end1) {
		candidates = append(candidates, start2)
	}
	if onSegment(end2, start1, end1) {
		candidates = append(candidates, end2)
	}
	if len(candidates) == 0 {
		return []float64{}
	}
	sort.Slice(candidates, func(i, j int) bool {
		if candidates[i][0] != candidates[j][0] {
			return candidates[i][0] < candidates[j][0]
		}
		return candidates[i][1] < candidates[j][1]
	})
	return []float64{float64(candidates[0][0]), float64(candidates[0][1])}
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println("Input:  line1 = {0, 0}, {1, 0}; line2 = {1, 1}, {0, -1}")
	fmt.Printf("Output: %v\n", intersection([]int{0, 0}, []int{1, 0}, []int{1, 1}, []int{0, -1}))
}
