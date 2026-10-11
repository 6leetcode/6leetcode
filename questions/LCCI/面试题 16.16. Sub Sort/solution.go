package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func subSort(array []int) []int {
	m, n := -1, -1
	mx := array[0]
	for i := 1; i < len(array); i++ {
		if array[i] < mx {
			n = i
		} else {
			mx = array[i]
		}
	}
	mn := array[len(array)-1]
	for i := len(array) - 2; i >= 0; i-- {
		if array[i] > mn {
			m = i
		} else {
			mn = array[i]
		}
	}
	return []int{m, n}
}

// ------------------------------- solution end ---------------------------------

func main() {
	array := []int{1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19}
	fmt.Printf("Input:  %v\n", array)
	fmt.Printf("Output: %v\n", subSort(array))
}
