package main

import (
	"fmt"
	"sort"
)

func largestPerimeter(a []int) int {
	sort.Ints(a)
	for i := len(a) - 1; i >= 2; i-- {
		if a[i-2]+a[i-1] > a[i] {
			return a[i-2] + a[i-1] + a[i]
		}
	}
	return 0
}

func main() {
	var input = []int{3, 6, 2, 3}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %v\n", largestPerimeter(input))
}
