package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func add(a int, b int) int {
	x, y := int32(a), int32(b)
	for y != 0 {
		sum := x ^ y
		carry := int32(uint32(x&y) << 1)
		x, y = sum, carry
	}
	return int(x)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1, input2 = -1, 2
	fmt.Printf("Input:  %d %d\n", input1, input2)
	fmt.Printf("Output: %d\n", add(input1, input2))
}
