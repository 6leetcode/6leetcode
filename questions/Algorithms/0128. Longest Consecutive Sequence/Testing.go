package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func longestConsecutive(nums []int) int {
	set := make(map[int]bool, len(nums))
	for _, v := range nums {
		set[v] = true
	}

	best := 0
	for v := range set {
		if !set[v-1] {
			cur := v
			length := 1
			for set[cur+1] {
				cur++
				length++
			}
			if length > best {
				best = length
			}
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	tests := [][]int{
		{100, 4, 200, 1, 3, 2},
		{0, 3, 7, 2, 5, 8, 4, 6, 0, 1},
		{1, 0, 1, 2},
	}
	for _, t := range tests {
		fmt.Printf("Input:  %v\n", t)
		fmt.Printf("Output: %d\n", longestConsecutive(t))
	}
}
