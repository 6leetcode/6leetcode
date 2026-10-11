package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func swapNumbers(numbers []int) {
	numbers[0] ^= numbers[1]
	numbers[1] ^= numbers[0]
	numbers[0] ^= numbers[1]
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := []int{1, 2}
	fmt.Printf("Input:  %v\n", input)
	swapNumbers(input)
	fmt.Printf("Output: %v\n", input)
}
