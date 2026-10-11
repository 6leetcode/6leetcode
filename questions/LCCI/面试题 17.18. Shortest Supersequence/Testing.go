package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func shortestSeq(big []int, small []int) []int {
	need := map[int]bool{}
	for _, x := range small {
		need[x] = true
	}
	bestLen, bestL, bestR := len(big)+1, -1, -1
	for l := 0; l < len(big); l++ {
		if !need[big[l]] {
			continue
		}
		seen := map[int]bool{}
		found, r := 0, l
		for ; r < len(big); r++ {
			if need[big[r]] && !seen[big[r]] {
				seen[big[r]] = true
				found++
				if found == len(need) {
					break
				}
			}
		}
		if found == len(need) {
			if r-l+1 < bestLen {
				bestLen = r - l + 1
				bestL, bestR = l, r
			}
		}
	}
	if bestL == -1 {
		return []int{}
	}
	return []int{bestL, bestR}
}

// ------------------------------- solution end ---------------------------------

func main() {
	big := []int{7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7}
	small := []int{1, 5, 9}
	fmt.Printf("Input:  big = %v, small = %v\n", big, small)
	fmt.Printf("Output: %v\n", shortestSeq(big, small))
}
