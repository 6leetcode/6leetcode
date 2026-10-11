package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func divingBoard(shorter int, longer int, k int) []int {
	res := []int{}
	if k == 0 {
		return res
	}
	if shorter == longer {
		return []int{shorter * k}
	}
	for i := 0; i <= k; i++ {
		res = append(res, shorter*(k-i)+longer*i)
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	shorter, longer, k := 1, 2, 3
	fmt.Printf("Input:  shorter = %d, longer = %d, k = %d\n", shorter, longer, k)
	fmt.Printf("Output: %v\n", divingBoard(shorter, longer, k))
}
