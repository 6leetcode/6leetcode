package main

import (
	"fmt"
	"sort"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func groupAnagrams(strs []string) [][]string {
	groups := map[string][]string{}
	var order []string
	for _, s := range strs {
		chars := strings.Split(s, "")
		sort.Strings(chars)
		key := strings.Join(chars, "")
		if _, ok := groups[key]; !ok {
			order = append(order, key)
		}
		groups[key] = append(groups[key], s)
	}
	res := make([][]string, 0, len(order))
	for _, key := range order {
		res = append(res, groups[key])
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := []string{"eat", "tea", "tan", "ate", "nat", "bat"}
	fmt.Println(`Input:  ["eat", "tea", "tan", "ate", "nat", "bat"]`)
	fmt.Printf("Output: %v\n", groupAnagrams(input))
}
