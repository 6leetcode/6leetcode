package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findLongestSubarray(array []string) []string {
	first := map[int]int{0: -1}
	sum, bestLen, bestStart := 0, 0, 0
	for i := 0; i < len(array); i++ {
		c := array[i][0]
		if c >= '0' && c <= '9' {
			sum--
		} else {
			sum++
		}
		if idx, ok := first[sum]; ok {
			if i-idx > bestLen {
				bestLen = i - idx
				bestStart = idx + 1
			}
		} else {
			first[sum] = i
		}
	}
	res := []string{}
	for i := bestStart; i < bestStart+bestLen; i++ {
		res = append(res, array[i])
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	array := []string{"A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M"}
	fmt.Println(`Input:  ["A","1","B","C","D","2","3","4","E","5","F","G","6","7","H","I","J","K","L","M"]`)
	fmt.Printf("Output: %q\n", findLongestSubarray(array))
}
