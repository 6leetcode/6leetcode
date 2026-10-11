package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func lengthOfLIS(nums []int) int {
	n := len(nums)
	if n == 0 {
		return 0
	}
	dp := make([]int, n)
	maxLen := 1
	for i := 0; i < n; i++ {
		dp[i] = 1
		for j := 0; j < i; j++ {
			if nums[i] > nums[j] && dp[j]+1 > dp[i] {
				dp[i] = dp[j] + 1
			}
		}
		if dp[i] > maxLen {
			maxLen = dp[i]
		}
	}
	return maxLen
}

// ------------------------------- solution end ---------------------------------

func main() {
	inputs := [][]int{
		{10, 9, 2, 5, 3, 7, 101, 18},
		{0, 1, 0, 3, 2, 3},
		{7, 7, 7, 7, 7},
	}
	for _, input := range inputs {
		fmt.Printf("Input:  %v\n", input)
		fmt.Printf("Output: %d\n", lengthOfLIS(input))
	}
}
