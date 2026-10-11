package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func letterCombinations(digits string) []string {
	if len(digits) == 0 {
		return nil
	}
	mapping := []string{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}
	res := []string{""}
	for i := 0; i < len(digits); i++ {
		var next []string
		for _, prefix := range res {
			for _, c := range mapping[digits[i]-'2'] {
				next = append(next, prefix+string(c))
			}
		}
		res = next
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "23"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %v\n", letterCombinations(input))
}
