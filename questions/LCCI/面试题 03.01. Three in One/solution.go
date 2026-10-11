package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type TripleInOne struct {
	arr  []int
	size int
	top  [3]int
}

func Constructor(stackSize int) TripleInOne {
	return TripleInOne{arr: make([]int, 3*stackSize), size: stackSize}
}

func (t *TripleInOne) Push(stackNum int, value int) {
	if t.top[stackNum] < t.size {
		t.arr[stackNum*t.size+t.top[stackNum]] = value
		t.top[stackNum]++
	}
}

func (t *TripleInOne) Pop(stackNum int) int {
	if t.top[stackNum] == 0 {
		return -1
	}
	t.top[stackNum]--
	return t.arr[stackNum*t.size+t.top[stackNum]]
}

func (t *TripleInOne) Peek(stackNum int) int {
	if t.top[stackNum] == 0 {
		return -1
	}
	return t.arr[stackNum*t.size+t.top[stackNum]-1]
}

func (t *TripleInOne) IsEmpty(stackNum int) bool {
	return t.top[stackNum] == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["TripleInOne", "push", "push", "pop", "pop", "pop", "isEmpty"]`)
	obj := Constructor(1)
	obj.Push(0, 1)
	obj.Push(0, 2)
	fmt.Printf("Output: [null, null, null, %d, %d, %d, %t]\n", obj.Pop(0), obj.Pop(0), obj.Pop(0), obj.IsEmpty(0))
}
