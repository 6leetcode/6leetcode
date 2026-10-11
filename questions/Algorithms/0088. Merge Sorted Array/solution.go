package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func merge(nums1 []int, m int, nums2 []int, n int) {
	i, j, k := m-1, n-1, m+n-1
	for j >= 0 {
		if i >= 0 && nums1[i] > nums2[j] {
			nums1[k] = nums1[i]
			i--
		} else {
			nums1[k] = nums2[j]
			j--
		}
		k--
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = []int{1, 2, 3, 0, 0, 0}
	var input2 = []int{2, 5, 6}
	var m, n = 3, 3
	fmt.Printf("Input:  %v %d %v %d\n", input1, m, input2, n)
	merge(input1, m, input2, n)
	fmt.Printf("Output: %v\n", input1)
}
