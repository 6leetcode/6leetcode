package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func smallestK(arr []int, k int) []int {
	sort.Ints(arr)
	return arr[:k]
}

// ------------------------------- solution end ---------------------------------

func main() {
	arr := []int{1, 3, 5, 7, 2, 4, 6, 8}
	k := 4
	fmt.Printf("Input:  %v, k = %d\n", arr, k)
	fmt.Printf("Output: %v\n", smallestK(arr, k))
}
