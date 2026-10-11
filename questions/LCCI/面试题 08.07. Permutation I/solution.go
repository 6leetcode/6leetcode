package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func permutation(S string) []string {
	var res []string
	n := len(S)
	used := make([]bool, n)
	var cur []byte
	var dfs func()
	dfs = func() {
		if len(cur) == n {
			res = append(res, string(cur))
			return
		}
		for i := 0; i < n; i++ {
			if used[i] {
				continue
			}
			used[i] = true
			cur = append(cur, S[i])
			dfs()
			cur = cur[:len(cur)-1]
			used[i] = false
		}
	}
	dfs()
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "qwe"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %q\n", permutation(input))
}
