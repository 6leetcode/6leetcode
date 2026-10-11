package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func ladderLength(beginWord string, endWord string, wordList []string) int {
	dict := make(map[string]bool, len(wordList))
	for _, w := range wordList {
		dict[w] = true
	}
	if !dict[endWord] {
		return 0
	}

	queue := []string{beginWord}
	level := 1

	for len(queue) > 0 {
		size := len(queue)
		for i := 0; i < size; i++ {
			word := queue[i]
			if word == endWord {
				return level
			}
			bs := []byte(word)
			for j := 0; j < len(bs); j++ {
				origin := bs[j]
				for c := byte('a'); c <= 'z'; c++ {
					if c == origin {
						continue
					}
					bs[j] = c
					cand := string(bs)
					if dict[cand] {
						delete(dict, cand)
						queue = append(queue, cand)
					}
				}
				bs[j] = origin
			}
		}
		queue = queue[size:]
		level++
	}

	return 0
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

func main() {
	list1 := []string{"hot", "dot", "dog", "lot", "log", "cog"}
	list2 := []string{"hot", "dot", "dog", "lot", "log"}
	list3 := []string{"hot", "dog", "dot"}

	fmt.Printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = %s\n", showWords(list1))
	fmt.Printf("Output: %d\n", ladderLength("hit", "cog", list1))

	fmt.Printf("Input:  beginWord = \"hit\", endWord = \"cog\", wordList = %s\n", showWords(list2))
	fmt.Printf("Output: %d\n", ladderLength("hit", "cog", list2))

	fmt.Printf("Input:  beginWord = \"hot\", endWord = \"dog\", wordList = %s\n", showWords(list3))
	fmt.Printf("Output: %d\n", ladderLength("hot", "dog", list3))
}
