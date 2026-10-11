package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maxAliveYear(birth []int, death []int) int {
	delta := make([]int, 102)
	for i := range birth {
		delta[birth[i]-1900]++
		delta[death[i]-1900+1]--
	}
	best, cur, bestYear := 0, 0, 1900
	for i := 0; i <= 100; i++ {
		cur += delta[i]
		if cur > best {
			best = cur
			bestYear = 1900 + i
		}
	}
	return bestYear
}

// ------------------------------- solution end ---------------------------------

func main() {
	birth := []int{1900, 1901, 1950}
	death := []int{1948, 1951, 2000}
	fmt.Printf("Input:  birth = %v, death = %v\n", birth, death)
	fmt.Printf("Output: %d\n", maxAliveYear(birth, death))
}
