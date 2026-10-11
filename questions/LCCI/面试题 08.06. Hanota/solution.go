package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func hanota(A []int, B []int, C []int) []int {
	var hanoi func(src, aux, dst *[]int, n int)
	hanoi = func(src, aux, dst *[]int, n int) {
		if n == 0 {
			return
		}
		hanoi(src, dst, aux, n-1)
		*dst = append(*dst, (*src)[len(*src)-1])
		*src = (*src)[:len(*src)-1]
		hanoi(aux, src, dst, n-1)
	}
	hanoi(&A, &B, &C, len(A))
	return C
}

// ------------------------------- solution end ---------------------------------

func main() {
	A := []int{2, 1, 0}
	B := []int{}
	C := []int{}
	fmt.Println("Input:  A = [2, 1, 0], B = [], C = []")
	fmt.Printf("Output: C = %v\n", hanota(A, B, C))
}
