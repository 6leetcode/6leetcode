package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type MinStack struct {
	data []int
	mins []int
}

func Constructor() MinStack {
	return MinStack{}
}

func (m *MinStack) Push(x int) {
	m.data = append(m.data, x)
	cur := x
	if len(m.mins) > 0 && m.mins[len(m.mins)-1] < cur {
		cur = m.mins[len(m.mins)-1]
	}
	m.mins = append(m.mins, cur)
}

func (m *MinStack) Pop() {
	m.data = m.data[:len(m.data)-1]
	m.mins = m.mins[:len(m.mins)-1]
}

func (m *MinStack) Top() int {
	return m.data[len(m.data)-1]
}

func (m *MinStack) GetMin() int {
	return m.mins[len(m.mins)-1]
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]`)
	obj := Constructor()
	obj.Push(-2)
	obj.Push(0)
	obj.Push(-3)
	a := obj.GetMin()
	obj.Pop()
	b := obj.Top()
	c := obj.GetMin()
	fmt.Printf("Output: [null, null, null, null, %d, null, %d, %d]\n", a, b, c)
}
