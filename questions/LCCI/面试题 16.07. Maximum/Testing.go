package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maximum(a int, b int) int {
	diff := int64(a) - int64(b)
	k := int(diff>>63) & 1
	return a*(1-k) + b*k
}

// ------------------------------- solution end ---------------------------------

func main() {
	var a, b = 1, 2
	fmt.Printf("Input:  a = %d, b = %d\n", a, b)
	fmt.Printf("Output: %d\n", maximum(a, b))
}
