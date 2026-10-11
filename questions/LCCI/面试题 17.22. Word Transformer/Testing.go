package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func diffOne(a, b string) bool {
	diff := 0
	for i := 0; i < len(a); i++ {
		if a[i] != b[i] {
			diff++
		}
	}
	return diff == 1
}

func findLadders(beginWord string, endWord string, wordList []string) []string {
	words := append([]string{beginWord}, wordList...)
	n := len(words)
	endIdx := -1
	for i := 0; i < n; i++ {
		if words[i] == endWord {
			endIdx = i
		}
	}
	if endIdx == -1 {
		return []string{}
	}
	dist := make([]int, n)
	prev := make([]int, n)
	for i := range dist {
		dist[i] = -1
		prev[i] = -1
	}
	queue := []int{0}
	dist[0] = 0
	found := -1
	for head := 0; head < len(queue); head++ {
		u := queue[head]
		if u == endIdx {
			found = u
			break
		}
		for v := 0; v < n; v++ {
			if dist[v] == -1 && diffOne(words[u], words[v]) {
				dist[v] = dist[u] + 1
				prev[v] = u
				queue = append(queue, v)
			}
		}
	}
	if found == -1 {
		return []string{}
	}
	res := []string{}
	for cur := found; cur != -1; cur = prev[cur] {
		res = append(res, words[cur])
	}
	for i, j := 0, len(res)-1; i < j; i, j = i+1, j-1 {
		res[i], res[j] = res[j], res[i]
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	beginWord := "hit"
	endWord := "cog"
	wordList := []string{"hot", "dot", "dog", "lot", "log", "cog"}
	fmt.Println(`Input:  beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]`)
	fmt.Printf("Output: %q\n", findLadders(beginWord, endWord, wordList))
}
