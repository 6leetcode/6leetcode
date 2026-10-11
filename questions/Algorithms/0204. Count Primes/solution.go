package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func countPrimes(n int) int {
	if n < 2 {
		return 0
	}
	isPrim := make([]bool, n)
	for i := range isPrim {
		isPrim[i] = true
	}
	for i := 2; i*i < n; i++ {
		if isPrim[i] {
			for j := i * i; j < n; j += i {
				isPrim[j] = false
			}
		}
	}
	count := 0
	for i := 2; i < n; i++ {
		if isPrim[i] {
			count++
		}
	}
	return count
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 10
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", countPrimes(input))
}
