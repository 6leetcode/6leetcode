package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func bestSeqAtIndex(height []int, weight []int) int {
	people := make([][2]int, len(height))
	for i := range height {
		people[i] = [2]int{height[i], weight[i]}
	}
	sort.Slice(people, func(i, j int) bool {
		if people[i][0] != people[j][0] {
			return people[i][0] < people[j][0]
		}
		return people[i][1] > people[j][1]
	})
	dp := []int{}
	for _, p := range people {
		w := p[1]
		lo, hi := 0, len(dp)
		for lo < hi {
			mid := lo + (hi-lo)/2
			if dp[mid] < w {
				lo = mid + 1
			} else {
				hi = mid
			}
		}
		if lo == len(dp) {
			dp = append(dp, w)
		} else {
			dp[lo] = w
		}
	}
	return len(dp)
}

// ------------------------------- solution end ---------------------------------

func main() {
	height := []int{65, 70, 56, 75, 60, 68}
	weight := []int{100, 150, 90, 190, 95, 110}
	fmt.Println("Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]")
	fmt.Printf("Output: %d\n", bestSeqAtIndex(height, weight))
}
