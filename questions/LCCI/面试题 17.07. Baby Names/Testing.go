package main

import (
	"fmt"
	"sort"
	"strconv"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func trulyMostPopular(names []string, synonyms []string) []string {
	parent := map[string]string{}
	freq := map[string]int{}
	var find func(x string) string
	find = func(x string) string {
		if _, ok := parent[x]; !ok {
			parent[x] = x
		}
		if parent[x] != x {
			parent[x] = find(parent[x])
		}
		return parent[x]
	}
	union := func(a, b string) {
		ra, rb := find(a), find(b)
		if ra == rb {
			return
		}
		if ra < rb {
			parent[rb] = ra
		} else {
			parent[ra] = rb
		}
	}
	for _, s := range names {
		pos := strings.Index(s, "(")
		name := s[:pos]
		cnt, _ := strconv.Atoi(s[pos+1 : len(s)-1])
		freq[name] = cnt
		find(name)
	}
	for _, s := range synonyms {
		inside := s[1 : len(s)-1]
		parts := strings.Split(inside, ",")
		union(parts[0], parts[1])
	}
	agg := map[string]int{}
	for name, cnt := range freq {
		agg[find(name)] += cnt
	}
	res := []string{}
	for name, cnt := range agg {
		res = append(res, name+"("+strconv.Itoa(cnt)+")")
	}
	sort.Strings(res)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	names := []string{"John(15)", "Jon(12)", "Chris(13)", "Kris(4)", "Christopher(19)"}
	synonyms := []string{"(Jon,John)", "(John,Johnny)", "(Chris,Kris)", "(Chris,Christopher)"}
	fmt.Println("Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]")
	fmt.Printf("Output: %q\n", trulyMostPopular(names, synonyms))
}
