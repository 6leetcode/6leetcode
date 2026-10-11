package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func drawLine(length int, w int, x1 int, x2 int, y int) []int {
	res := make([]int, length)
	perRow := w / 32
	for x := x1; x <= x2; x++ {
		group := y*perRow + x/32
		bit := 31 - (x % 32)
		res[group] |= 1 << bit
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	length, w, x1, x2, y := 1, 32, 30, 31, 0
	fmt.Println("Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0")
	fmt.Printf("Output: %v\n", drawLine(length, w, x1, x2, y))
}
