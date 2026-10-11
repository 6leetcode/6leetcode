package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func generatePossibleNextMoves(s string) []string {
	res := []string{}
	for i := 0; i+1 < len(s); i++ {
		if s[i] == '+' && s[i+1] == '+' {
			t := []byte(s)
			t[i], t[i+1] = '-', '-'
			res = append(res, string(t))
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "++++"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %v\n", generatePossibleNextMoves(input))
}
