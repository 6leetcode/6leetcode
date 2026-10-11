package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func minWindow(s string, t string) string {
	need := make([]int, 128)
	have := make([]int, 128)
	required := 0
	for i := 0; i < len(t); i++ {
		if need[t[i]] == 0 {
			required++
		}
		need[t[i]]++
	}
	matched, left, start, minLen := 0, 0, 0, 1<<30
	for right := 0; right < len(s); right++ {
		c := s[right]
		have[c]++
		if need[c] > 0 && have[c] == need[c] {
			matched++
		}
		for matched == required {
			if right-left+1 < minLen {
				minLen = right - left + 1
				start = left
			}
			lc := s[left]
			if need[lc] > 0 && have[lc] == need[lc] {
				matched--
			}
			have[lc]--
			left++
		}
	}
	if minLen == 1<<30 {
		return ""
	}
	return s[start : start+minLen]
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1, input2 = "ADOBECODEBANC", "ABC"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %s\n", minWindow(input1, input2))
}
