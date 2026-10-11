package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type StackOfPlates struct {
	cap    int
	stacks [][]int
}

func Constructor(cap int) StackOfPlates {
	return StackOfPlates{cap: cap}
}

func (s *StackOfPlates) Push(val int) {
	if s.cap == 0 {
		return
	}
	if len(s.stacks) == 0 || len(s.stacks[len(s.stacks)-1]) == s.cap {
		s.stacks = append(s.stacks, []int{})
	}
	last := len(s.stacks) - 1
	s.stacks[last] = append(s.stacks[last], val)
}

func (s *StackOfPlates) Pop() int {
	if len(s.stacks) == 0 {
		return -1
	}
	last := len(s.stacks) - 1
	v := s.stacks[last][len(s.stacks[last])-1]
	s.stacks[last] = s.stacks[last][:len(s.stacks[last])-1]
	if len(s.stacks[last]) == 0 {
		s.stacks = s.stacks[:last]
	}
	return v
}

func (s *StackOfPlates) PopAt(index int) int {
	if index < 0 || index >= len(s.stacks) {
		return -1
	}
	v := s.stacks[index][len(s.stacks[index])-1]
	s.stacks[index] = s.stacks[index][:len(s.stacks[index])-1]
	if len(s.stacks[index]) == 0 {
		s.stacks = append(s.stacks[:index], s.stacks[index+1:]...)
	}
	return v
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["StackOfPlates", "push", "push", "push", "popAt", "popAt", "popAt"]`)
	obj := Constructor(2)
	obj.Push(1)
	obj.Push(2)
	obj.Push(3)
	fmt.Printf("Output: [null, null, null, null, %d, %d, %d]\n", obj.PopAt(0), obj.PopAt(0), obj.PopAt(0))
}
