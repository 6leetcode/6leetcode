package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
func computeSimilarities(docs [][]int) []string {
	wordDocs := map[int][]int{}
	for i, doc := range docs {
		for _, w := range doc {
			wordDocs[w] = append(wordDocs[w], i)
		}
	}
	type key struct{ a, b int }
	inter := map[key]int{}
	for _, ids := range wordDocs {
		for x := 0; x < len(ids); x++ {
			for y := x + 1; y < len(ids); y++ {
				inter[key{ids[x], ids[y]}]++
			}
		}
	}
	keys := []key{}
	for k := range inter {
		keys = append(keys, k)
	}
	sort.Slice(keys, func(i, j int) bool {
		if keys[i].a != keys[j].a {
			return keys[i].a < keys[j].a
		}
		return keys[i].b < keys[j].b
	})
	res := []string{}
	for _, k := range keys {
		c := inter[k]
		uni := len(docs[k.a]) + len(docs[k.b]) - c
		res = append(res, fmt.Sprintf("%d,%d: %.4f", k.a, k.b, float64(c)/float64(uni)))
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	docs := [][]int{{14, 15, 100, 9, 3}, {32, 1, 9, 3, 5}, {15, 29, 2, 6, 8, 7}, {7, 10}}
	fmt.Println("Input:  [[14,15,100,9,3],[32,1,9,3,5],[15,29,2,6,8,7],[7,10]]")
	fmt.Printf("Output: %q\n", computeSimilarities(docs))
}
