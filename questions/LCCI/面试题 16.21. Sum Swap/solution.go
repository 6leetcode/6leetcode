package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findSwapValues(array1 []int, array2 []int) []int {
	sum1, sum2 := 0, 0
	for _, x := range array1 {
		sum1 += x
	}
	for _, x := range array2 {
		sum2 += x
	}
	diff := sum2 - sum1
	if diff%2 != 0 {
		return []int{}
	}
	target := diff / 2
	for _, x := range array1 {
		for _, y := range array2 {
			if y == x+target {
				return []int{x, y}
			}
		}
	}
	return []int{}
}

// ------------------------------- solution end ---------------------------------

func main() {
	array1 := []int{4, 1, 2, 1, 1, 2}
	array2 := []int{3, 6, 3, 3}
	fmt.Printf("Input:  array1 = %v, array2 = %v\n", array1, array2)
	fmt.Printf("Output: %v\n", findSwapValues(array1, array2))
}
