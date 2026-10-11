package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func nextBigger(num int) int {
	c, c0, c1 := num, 0, 0
	for c != 0 && c&1 == 0 {
		c0++
		c >>= 1
	}
	for c&1 == 1 {
		c1++
		c >>= 1
	}
	if c0+c1 >= 31 {
		return -1
	}
	p := c0 + c1
	num |= 1 << p
	num &= ^((1 << p) - 1)
	num |= (1 << (c1 - 1)) - 1
	return num
}

func nextSmaller(num int) int {
	c, c0, c1 := num, 0, 0
	for c&1 == 1 {
		c1++
		c >>= 1
	}
	if c == 0 {
		return -1
	}
	for c != 0 && c&1 == 0 {
		c0++
		c >>= 1
	}
	p := c0 + c1
	num &= ^((1 << (p + 1)) - 1)
	num |= ((1 << (c1 + 1)) - 1) << (c0 - 1)
	return num
}

func findClosedNumbers(num int) []int {
	return []int{nextBigger(num), nextSmaller(num)}
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 2
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %v\n", findClosedNumbers(input))
}
