package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func sortArrayByParityII(A []int) []int {
	n := len(A)
	ans := make([]int, n)
	i := 0
	for _, x := range A {
		if x%2 == 0 {
			ans[i] = x
			i += 2
		}
	}
	i = 1
	for _, x := range A {
		if x%2 == 1 {
			ans[i] = x
			i += 2
		}
	}
	return ans
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{4, 2, 5, 7}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %v\n", sortArrayByParityII(input))
}
