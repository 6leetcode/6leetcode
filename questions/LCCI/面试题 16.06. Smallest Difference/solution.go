package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func smallestDifference(a []int, b []int) int {
	sort.Ints(a)
	sort.Ints(b)
	i, j := 0, 0
	best := int64(1) << 62
	for i < len(a) && j < len(b) {
		diff := int64(a[i]) - int64(b[j])
		if diff < 0 {
			diff = -diff
		}
		if diff < best {
			best = diff
		}
		if a[i] < b[j] {
			i++
		} else {
			j++
		}
	}
	return int(best)
}

// ------------------------------- solution end ---------------------------------

func main() {
	a := []int{1, 3, 15, 11, 2}
	b := []int{23, 127, 235, 19, 8}
	fmt.Printf("Input:  %v, %v\n", a, b)
	fmt.Printf("Output: %d\n", smallestDifference(a, b))
}
