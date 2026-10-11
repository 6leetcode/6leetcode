package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func judgePoint24(nums []int) bool {
	a := make([]float64, len(nums))
	for i, x := range nums {
		a[i] = float64(x)
	}
	var solve func(arr []float64) bool
	solve = func(arr []float64) bool {
		if len(arr) == 1 {
			return math.Abs(arr[0]-24) < 1e-6
		}
		for i := 0; i < len(arr); i++ {
			for j := 0; j < len(arr); j++ {
				if i == j {
					continue
				}
				rest := []float64{}
				for k := 0; k < len(arr); k++ {
					if k != i && k != j {
						rest = append(rest, arr[k])
					}
				}
				x, y := arr[i], arr[j]
				cands := []float64{x + y, x - y, x * y}
				if math.Abs(y) > 1e-6 {
					cands = append(cands, x/y)
				}
				for _, v := range cands {
					next := append(append([]float64{}, rest...), v)
					if solve(next) {
						return true
					}
				}
			}
		}
		return false
	}
	return solve(a)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{3, 3, 8, 8}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %t\n", judgePoint24(input))
}
