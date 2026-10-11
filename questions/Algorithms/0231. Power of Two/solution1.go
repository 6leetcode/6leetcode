package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isPowerOfTwo(n int) bool {
	cnt := 0 // num of bits 1
	for ; n > 0; n >>= 1 {
		if n&1 == 1 {
			cnt++
			if cnt > 1 {
				return false
			}
		}
	}
	return cnt == 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 16
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %t\n", isPowerOfTwo(input))
}
