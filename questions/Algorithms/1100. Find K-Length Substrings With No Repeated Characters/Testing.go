package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func numKLenSubstrNoRepeats(S string, k int) int {
	n := len(S)
	if n < k {
		return 0
	}
	count := make([]int, 26)
	distinct, ans := 0, 0
	for i := 0; i < n; i++ {
		idx := S[i] - 'a'
		if count[idx] == 0 {
			distinct++
		}
		count[idx]++
		if i >= k {
			rm := S[i-k] - 'a'
			count[rm]--
			if count[rm] == 0 {
				distinct--
			}
		}
		if i >= k-1 && distinct == k {
			ans++
		}
	}
	return ans
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "havefunonleetcode"
	var input2 = 5
	fmt.Printf("Input:  %s %d\n", input1, input2)
	fmt.Printf("Output: %d\n", numKLenSubstrNoRepeats(input1, input2))
}
