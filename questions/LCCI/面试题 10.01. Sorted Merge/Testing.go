package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func merge(A []int, m int, B []int, n int) {
	i, j, k := m-1, n-1, m+n-1
	for j >= 0 {
		if i >= 0 && A[i] > B[j] {
			A[k] = A[i]
			i--
		} else {
			A[k] = B[j]
			j--
		}
		k--
	}
}

// ------------------------------- solution end ---------------------------------

func main() {
	A := []int{1, 2, 3, 0, 0, 0}
	B := []int{2, 5, 6}
	m, n := 3, 3
	fmt.Printf("Input:  A = %v, m = %d; B = %v, n = %d\n", A, m, B, n)
	merge(A, m, B, n)
	fmt.Printf("Output: %v\n", A)
}
