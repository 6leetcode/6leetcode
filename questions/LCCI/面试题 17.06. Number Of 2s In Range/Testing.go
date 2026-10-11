package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func numberOf2sInRange(n int) int {
	var count int64 = 0
	for factor := int64(1); factor <= int64(n); factor *= 10 {
		cur := (int64(n) / factor) % 10
		higher := int64(n) / (factor * 10)
		lower := int64(n) % factor
		if cur < 2 {
			count += higher * factor
		} else if cur == 2 {
			count += higher*factor + lower + 1
		} else {
			count += (higher + 1) * factor
		}
	}
	return int(count)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 25
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", numberOf2sInRange(input))
}
