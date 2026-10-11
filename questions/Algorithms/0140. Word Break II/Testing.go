package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func wordBreak(s string, wordDict []string) []string {
	dict := make(map[string]bool, len(wordDict))
	for _, w := range wordDict {
		dict[w] = true
	}
	memo := make(map[int][]string)
	var dfs func(start int) []string
	dfs = func(start int) []string {
		if v, ok := memo[start]; ok {
			return v
		}
		if start == len(s) {
			return []string{""}
		}
		var res []string
		for end := start + 1; end <= len(s); end++ {
			w := s[start:end]
			if dict[w] {
				for _, tail := range dfs(end) {
					if tail == "" {
						res = append(res, w)
					} else {
						res = append(res, w+" "+tail)
					}
				}
			}
		}
		memo[start] = res
		return res
	}
	res := dfs(0)
	if res == nil {
		return []string{}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func run(s string, dict []string) {
	fmt.Printf("Input:  s = %q, wordDict = %q\n", s, dict)
	fmt.Printf("Output: %q\n", wordBreak(s, dict))
}

func main() {
	run("catsanddog", []string{"cat", "cats", "and", "sand", "dog"})
	run("pineapplepenapple", []string{"apple", "pen", "applepen", "pine", "pineapple"})
	run("catsandog", []string{"cats", "dog", "sand", "and", "cat"})
}
