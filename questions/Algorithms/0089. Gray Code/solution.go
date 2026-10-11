package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func grayCode(n int) []int {
	res := make([]int, 1<<n)
	for i := range res {
		res[i] = (i >> 1) ^ i
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 2
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %v\n", grayCode(input))
}
