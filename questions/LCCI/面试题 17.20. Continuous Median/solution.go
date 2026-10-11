package main

import (
	"container/heap"
	"fmt"
)

// ------------------------------- solution begin -------------------------------
type maxHeap []int
type minHeap []int

func (h maxHeap) Len() int            { return len(h) }
func (h maxHeap) Less(i, j int) bool  { return h[i] > h[j] }
func (h maxHeap) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *maxHeap) Push(x interface{}) { *h = append(*h, x.(int)) }
func (h *maxHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[:n-1]
	return x
}

func (h minHeap) Len() int            { return len(h) }
func (h minHeap) Less(i, j int) bool  { return h[i] < h[j] }
func (h minHeap) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *minHeap) Push(x interface{}) { *h = append(*h, x.(int)) }
func (h *minHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[:n-1]
	return x
}

type MedianFinder struct {
	lower *maxHeap
	upper *minHeap
}

func Constructor() MedianFinder {
	lo := &maxHeap{}
	up := &minHeap{}
	heap.Init(lo)
	heap.Init(up)
	return MedianFinder{lo, up}
}

func (m *MedianFinder) AddNum(num int) {
	heap.Push(m.lower, num)
	heap.Push(m.upper, heap.Pop(m.lower))
	if m.lower.Len() < m.upper.Len() {
		heap.Push(m.lower, heap.Pop(m.upper))
	}
}

func (m *MedianFinder) FindMedian() float64 {
	if m.lower.Len() > m.upper.Len() {
		return float64((*m.lower)[0])
	}
	return float64((*m.lower)[0]+(*m.upper)[0]) / 2.0
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println("Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()")
	obj := Constructor()
	obj.AddNum(1)
	obj.AddNum(2)
	a := obj.FindMedian()
	obj.AddNum(3)
	b := obj.FindMedian()
	fmt.Printf("Output: [%g, %g]\n", a, b)
}
