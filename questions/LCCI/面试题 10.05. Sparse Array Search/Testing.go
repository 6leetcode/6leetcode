package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findString(words []string, s string) int {
	lo, hi := 0, len(words)-1
	for lo <= hi {
		mid := lo + (hi-lo)/2
		m := mid
		for m < hi && words[m] == "" {
			m++
		}
		if words[m] == "" {
			hi = mid - 1
			continue
		}
		if words[m] == s {
			return m
		}
		if words[m] < s {
			lo = m + 1
		} else {
			hi = mid - 1
		}
	}
	return -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	words := []string{"at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""}
	var s = "ball"
	fmt.Println(`Input:  ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""], s = "ball"`)
	fmt.Printf("Output: %d\n", findString(words, s))
}
