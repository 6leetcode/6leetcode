package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func exchangeBits(num int) int {
	n := uint32(num)
	return int(((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1))
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 2
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", exchangeBits(input))
}
