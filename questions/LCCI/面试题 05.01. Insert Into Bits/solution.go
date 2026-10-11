package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func insertBits(N int, M int, i int, j int) int {
	mask := uint32(((1 << (j - i + 1)) - 1) << i)
	N = int(uint32(N) & ^mask)
	N |= M << i
	return N
}

// ------------------------------- solution end ---------------------------------

func main() {
	var N, M, i, j = 1024, 19, 2, 6
	fmt.Println("Input:  N = 10000000000, M = 10011, i = 2, j = 6")
	fmt.Printf("Output: %d\n", insertBits(N, M, i, j))
}
