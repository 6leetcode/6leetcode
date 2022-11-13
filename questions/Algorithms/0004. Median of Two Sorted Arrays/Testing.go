package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func FindMedianSortedArFrays(nums1 []int, nums2 []int) (result float64) {
	var total = make([]int, len(nums1)+len(nums2))
	copy(total, nums1)
	copy(total[len(nums1):], nums2)
	sort.Ints(total)
	var length = len(total)
	if length%2 == 0 {
		result = float64((total[int(length/2-1)] +
			total[int(length/2)]) / 2.0)
	} else {
		result = float64(total[int(length/2)])
	}
	return
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{4, 3, 2, 1}
	var input2 = []int{9, 8, 7, 6}
	fmt.Println("Input:", input1, input2)
	fmt.Println("Output:", FindMedianSortedArFrays(input1, input2))
}
