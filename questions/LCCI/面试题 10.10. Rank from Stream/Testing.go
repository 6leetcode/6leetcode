package main

import (
	"fmt"
	"sort"
)

// ------------------------------- solution begin -------------------------------
type StreamRank struct {
	data []int
}

func Constructor() StreamRank {
	return StreamRank{}
}

func (s *StreamRank) Track(x int) {
	i := sort.SearchInts(s.data, x+1)
	s.data = append(s.data, 0)
	copy(s.data[i+1:], s.data[i:])
	s.data[i] = x
}

func (s *StreamRank) GetRankOfNumber(x int) int {
	return sort.SearchInts(s.data, x+1)
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["StreamRank", "getRankOfNumber", "track", "getRankOfNumber"], [[], [1], [0], [0]]`)
	obj := Constructor()
	a := obj.GetRankOfNumber(1)
	obj.Track(0)
	b := obj.GetRankOfNumber(0)
	fmt.Printf("Output: [null, %d, null, %d]\n", a, b)
}
