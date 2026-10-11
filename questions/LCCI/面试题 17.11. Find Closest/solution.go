package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findClosest(words []string, word1 string, word2 string) int {
	best, p1, p2 := len(words), -1, -1
	for i, w := range words {
		if w == word1 {
			p1 = i
			if p2 != -1 && i-p2 < best {
				best = i - p2
			}
		} else if w == word2 {
			p2 = i
			if p1 != -1 && i-p1 < best {
				best = i - p1
			}
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	words := []string{"I", "am", "a", "student", "from", "a", "university", "in", "a", "city"}
	fmt.Println(`Input:  words = [...], word1 = "a", word2 = "student"`)
	fmt.Printf("Output: %d\n", findClosest(words, "a", "student"))
}
