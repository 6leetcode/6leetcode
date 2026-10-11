package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findSubstring(s string, words []string) []int {
	res := []int{}
	if len(words) == 0 || len(s) == 0 {
		return res
	}
	w := len(words[0])
	total := w * len(words)
	for i := 0; i+total <= len(s); i++ {
		used := make([]bool, len(words))
		ok := true
		for j := 0; j < len(words) && ok; j++ {
			found := false
			for t := range words {
				if !used[t] && s[i+j*w:i+(j+1)*w] == words[t] {
					used[t] = true
					found = true
					break
				}
			}
			ok = found
		}
		if ok {
			res = append(res, i)
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "barfoothefoobarman"
	var input2 = []string{"foo", "bar"}
	fmt.Printf("Input:  %s %v\n", input1, input2)
	fmt.Printf("Output: %v\n", findSubstring(input1, input2))
}
