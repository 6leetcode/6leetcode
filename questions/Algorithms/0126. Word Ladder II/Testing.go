package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findLadders(beginWord string, endWord string, wordList []string) [][]string {
	res := [][]string{}
	dict := make(map[string]bool, len(wordList))
	for _, w := range wordList {
		dict[w] = true
	}
	if !dict[endWord] {
		return res
	}

	parents := map[string][]string{}
	visited := map[string]bool{beginWord: true}
	level := []string{beginWord}
	found := false

	for len(level) > 0 && !found {
		next := []string{}
		nextSet := map[string]bool{}
		for _, word := range level {
			bs := []byte(word)
			for j := 0; j < len(bs); j++ {
				origin := bs[j]
				for c := byte('a'); c <= 'z'; c++ {
					if c == origin {
						continue
					}
					bs[j] = c
					cand := string(bs)
					if dict[cand] && !visited[cand] {
						if !nextSet[cand] {
							nextSet[cand] = true
							next = append(next, cand)
						}
						parents[cand] = append(parents[cand], word)
						if cand == endWord {
							found = true
						}
					}
				}
				bs[j] = origin
			}
		}
		for _, w := range next {
			visited[w] = true
		}
		level = next
	}

	if !found {
		return res
	}

	var dfs func(word string, path []string)
	dfs = func(word string, path []string) {
		if word == beginWord {
			r := make([]string, len(path))
			for i := range path {
				r[i] = path[len(path)-1-i]
			}
			res = append(res, r)
			return
		}
		for _, p := range parents[word] {
			np := make([]string, len(path)+1)
			copy(np, path)
			np[len(path)] = p
			dfs(p, np)
		}
	}
	dfs(endWord, []string{endWord})

	return res
}

// ------------------------------- solution end ---------------------------------

func showWords(list []string) string {
	res := "["
	for i, w := range list {
		if i > 0 {
			res += ", "
		}
		res += "\"" + w + "\""
	}
	return res + "]"
}

func showPaths(paths [][]string) string {
	res := "["
	for i, path := range paths {
		if i > 0 {
			res += ", "
		}
		res += "["
		for j, w := range path {
			if j > 0 {
				res += ", "
			}
			res += "\"" + w + "\""
		}
		res += "]"
	}
	return res + "]"
}

func main() {
	list1 := []string{"hot", "dot", "dog", "lot", "log", "cog"}
	list2 := []string{"hot", "dot", "dog", "lot", "log"}

	fmt.Printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = %s\n", showWords(list1))
	fmt.Printf("Output: %s\n", showPaths(findLadders("hit", "cog", list1)))

	fmt.Printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = %s\n", showWords(list2))
	fmt.Printf("Output: %s\n", showPaths(findLadders("hit", "cog", list2)))
}
