package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type MyQueue struct {
	in  []int
	out []int
}

func Constructor() MyQueue {
	return MyQueue{}
}

func (q *MyQueue) Push(x int) {
	q.in = append(q.in, x)
}

func (q *MyQueue) transfer() {
	if len(q.out) == 0 {
		for len(q.in) > 0 {
			q.out = append(q.out, q.in[len(q.in)-1])
			q.in = q.in[:len(q.in)-1]
		}
	}
}

func (q *MyQueue) Pop() int {
	q.transfer()
	v := q.out[len(q.out)-1]
	q.out = q.out[:len(q.out)-1]
	return v
}

func (q *MyQueue) Peek() int {
	q.transfer()
	return q.out[len(q.out)-1]
}

func (q *MyQueue) Empty() bool {
	return len(q.in) == 0 && len(q.out) == 0
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["MyQueue", "push", "push", "peek", "pop", "empty"]`)
	obj := Constructor()
	obj.Push(1)
	obj.Push(2)
	p := obj.Peek()
	q := obj.Pop()
	e := obj.Empty()
	fmt.Printf("Output: [null, null, null, %d, %d, %t]\n", p, q, e)
}
