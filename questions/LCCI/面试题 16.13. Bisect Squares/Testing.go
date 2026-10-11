package main

import (
	"fmt"
	"math"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func cutSquares(square1 []int, square2 []int) []float64 {
	c1x, c1y := float64(square1[0])+float64(square1[2])/2, float64(square1[1])+float64(square1[2])/2
	c2x, c2y := float64(square2[0])+float64(square2[2])/2, float64(square2[1])+float64(square2[2])/2
	if math.Abs(c1x-c2x) < 1e-12 {
		bottom := math.Min(float64(square1[1]), float64(square2[1]))
		top := math.Max(float64(square1[1]+square1[2]), float64(square2[1]+square2[2]))
		return []float64{c1x, bottom, c1x, top}
	}
	k := (c2y - c1y) / (c2x - c1x)
	b := c1y - k*c1x
	var pts [][2]float64
	for _, sq := range [][]int{square1, square2} {
		x0, y0, side := float64(sq[0]), float64(sq[1]), float64(sq[2])
		for _, x := range []float64{x0, x0 + side} {
			y := k*x + b
			if y >= y0-1e-6 && y <= y0+side+1e-6 {
				pts = append(pts, [2]float64{x, y})
			}
		}
		if math.Abs(k) > 1e-12 {
			for _, y := range []float64{y0, y0 + side} {
				x := (y - b) / k
				if x >= x0-1e-6 && x <= x0+side+1e-6 {
					pts = append(pts, [2]float64{x, y})
				}
			}
		}
	}
	sort.Slice(pts, func(i, j int) bool {
		if pts[i][0] != pts[j][0] {
			return pts[i][0] < pts[j][0]
		}
		return pts[i][1] < pts[j][1]
	})
	return []float64{pts[0][0], pts[0][1], pts[len(pts)-1][0], pts[len(pts)-1][1]}
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println("Input:  square1 = {-1, -1, 2}, square2 = {0, -1, 2}")
	fmt.Printf("Output: %v\n", cutSquares([]int{-1, -1, 2}, []int{0, -1, 2}))
}
