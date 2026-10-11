package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func maxProfit(prices []int) int {
	buy1, sell1 := -prices[0], 0
	buy2, sell2 := -prices[0], 0

	for _, price := range prices {
		if -price > buy1 {
			buy1 = -price
		}
		if buy1+price > sell1 {
			sell1 = buy1 + price
		}
		if sell1-price > buy2 {
			buy2 = sell1 - price
		}
		if buy2+price > sell2 {
			sell2 = buy2 + price
		}
	}

	return sell2
}

// ------------------------------- solution end ---------------------------------

func main() {
	prices1 := []int{3, 3, 5, 0, 0, 3, 1, 4}
	prices2 := []int{1, 2, 3, 4, 5}
	prices3 := []int{7, 6, 4, 3, 1}
	prices4 := []int{1}

	fmt.Println("Input: ", prices1)
	fmt.Println("Output:", maxProfit(prices1))

	fmt.Println("Input: ", prices2)
	fmt.Println("Output:", maxProfit(prices2))

	fmt.Println("Input: ", prices3)
	fmt.Println("Output:", maxProfit(prices3))

	fmt.Println("Input: ", prices4)
	fmt.Println("Output:", maxProfit(prices4))
}
