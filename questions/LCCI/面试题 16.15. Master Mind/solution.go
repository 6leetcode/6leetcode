package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func masterMind(solution string, guess string) []int {
	idx := func(c byte) int {
		switch c {
		case 'R':
			return 0
		case 'Y':
			return 1
		case 'G':
			return 2
		}
		return 3
	}
	hits := 0
	sCount := make([]int, 4)
	gCount := make([]int, 4)
	for i := 0; i < len(solution); i++ {
		if solution[i] == guess[i] {
			hits++
		} else {
			sCount[idx(solution[i])]++
			gCount[idx(guess[i])]++
		}
	}
	pseudo := 0
	for i := 0; i < 4; i++ {
		if sCount[i] < gCount[i] {
			pseudo += sCount[i]
		} else {
			pseudo += gCount[i]
		}
	}
	return []int{hits, pseudo}
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println("Input:  solution = RGBY, guess = GGRR")
	fmt.Printf("Output: %v\n", masterMind("RGBY", "GGRR"))
}
