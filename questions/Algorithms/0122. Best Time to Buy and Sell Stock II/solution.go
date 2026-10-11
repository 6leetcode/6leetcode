package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maxProfit(prices []int) int {
	profit := 0
	for i := 1; i < len(prices); i++ {
		if prices[i] > prices[i-1] {
			profit += prices[i] - prices[i-1]
		}
	}
	return profit
}

// ------------------------------- solution end ---------------------------------

func main() {
	prices1 := []int{7, 1, 5, 3, 6, 4}
	prices2 := []int{1, 2, 3, 4, 5}
	prices3 := []int{7, 6, 4, 3, 1}

	fmt.Println("Input: ", prices1)
	fmt.Println("Output:", maxProfit(prices1))

	fmt.Println("Input: ", prices2)
	fmt.Println("Output:", maxProfit(prices2))

	fmt.Println("Input: ", prices3)
	fmt.Println("Output:", maxProfit(prices3))
}
