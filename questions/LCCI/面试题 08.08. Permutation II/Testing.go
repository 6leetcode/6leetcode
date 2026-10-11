package main

import (
	"fmt"
	"sort"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func permutation(S string) []string {
	b := []byte(S)
	sort.Slice(b, func(i, j int) bool { return b[i] < b[j] })
	var res []string
	n := len(b)
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
			if i > 0 && b[i] == b[i-1] && !used[i-1] {
				continue
			}
			used[i] = true
			cur = append(cur, b[i])
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
	var input = "qqe"
	fmt.Printf("Input:  %s\n", input)
	_ = strings.TrimSpace
	fmt.Printf("Output: %q\n", permutation(input))
}
