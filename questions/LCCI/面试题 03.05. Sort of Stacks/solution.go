package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type SortedStack struct {
	data []int
}

func Constructor() SortedStack {
	return SortedStack{}
}

func (s *SortedStack) Push(val int) {
	var tmp []int
	for len(s.data) > 0 && s.data[len(s.data)-1] < val {
		tmp = append(tmp, s.data[len(s.data)-1])
		s.data = s.data[:len(s.data)-1]
	}
	s.data = append(s.data, val)
	for len(tmp) > 0 {
		s.data = append(s.data, tmp[len(tmp)-1])
		tmp = tmp[:len(tmp)-1]
	}
}

func (s *SortedStack) Pop() {
	if len(s.data) > 0 {
		s.data = s.data[:len(s.data)-1]
	}
}

func (s *SortedStack) Peek() int {
	if len(s.data) == 0 {
		return -1
	}
	return s.data[len(s.data)-1]
}

func (s *SortedStack) IsEmpty() bool {
	return len(s.data) == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["SortedStack", "push", "push", "peek", "pop", "peek"]`)
	obj := Constructor()
	obj.Push(1)
	obj.Push(2)
	a := obj.Peek()
	obj.Pop()
	b := obj.Peek()
	fmt.Printf("Output: [null, null, null, %d, null, %d]\n", a, b)
}
