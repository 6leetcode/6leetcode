package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func candy(ratings []int) int {
	n := len(ratings)
	c := make([]int, n)
	for i := range c {
		c[i] = 1
	}

	for i := 1; i < n; i++ {
		if ratings[i] > ratings[i-1] {
			c[i] = c[i-1] + 1
		}
	}
	for i := n - 2; i >= 0; i-- {
		if ratings[i] > ratings[i+1] && c[i] <= c[i+1] {
			c[i] = c[i+1] + 1
		}
	}

	total := 0
	for i := 0; i < n; i++ {
		total += c[i]
	}
	return total
}

// ------------------------------- solution end ---------------------------------

func main() {
	t1 := []int{1, 0, 2}
	fmt.Printf("Input:  %v\n", t1)
	fmt.Printf("Output: %d\n", candy(t1))

	t2 := []int{1, 2, 2}
	fmt.Printf("Input:  %v\n", t2)
	fmt.Printf("Output: %d\n", candy(t2))
}
