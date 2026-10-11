package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maxProfit(prices []int) int {
	if len(prices) == 0 {
		return 0
	}
	minPrice := prices[0]
	best := 0
	for i := 1; i < len(prices); i++ {
		if prices[i] < minPrice {
			minPrice = prices[i]
		} else if prices[i]-minPrice > best {
			best = prices[i] - minPrice
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []int{7, 1, 5, 3, 6, 4}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %d\n", maxProfit(input))
}
