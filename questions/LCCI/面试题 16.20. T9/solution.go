package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func T9(num string, words []string) []string {
	mapping := []string{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}
	res := []string{}
	for _, w := range words {
		if len(w) != len(num) {
			continue
		}
		ok := true
		for j := 0; j < len(w); j++ {
			if !strings.Contains(mapping[num[j]-'0'], string(w[j])) {
				ok = false
				break
			}
		}
		if ok {
			res = append(res, w)
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  num = "8733", words = ["tree", "used"]`)
	fmt.Printf("Output: %q\n", T9("8733", []string{"tree", "used"}))
}
