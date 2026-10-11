package main

import (
	"container/list"
	"fmt"
)

// ------------------------------- solution begin -------------------------------
type lruEntry struct {
	key   int
	value int
}

type LRUCache struct {
	capacity int
	order    *list.List
	items    map[int]*list.Element
}

func Constructor(capacity int) LRUCache {
	return LRUCache{
		capacity: capacity,
		order:    list.New(),
		items:    make(map[int]*list.Element),
	}
}

func (this *LRUCache) Get(key int) int {
	if el, ok := this.items[key]; ok {
		this.order.MoveToBack(el)
		return el.Value.(*lruEntry).value
	}
	return -1
}

func (this *LRUCache) Put(key int, value int) {
	if el, ok := this.items[key]; ok {
		el.Value.(*lruEntry).value = value
		this.order.MoveToBack(el)
		return
	}
	if this.order.Len() >= this.capacity {
		front := this.order.Front()
		this.order.Remove(front)
		delete(this.items, front.Value.(*lruEntry).key)
	}
	this.items[key] = this.order.PushBack(&lruEntry{key: key, value: value})
}

// ------------------------------- solution end ---------------------------------

func main() {
	cache := Constructor(2)
	cache.Put(1, 1)
	cache.Put(2, 2)
	a1 := cache.Get(1)
	cache.Put(3, 3)
	a2 := cache.Get(2)
	cache.Put(4, 4)
	a3 := cache.Get(1)
	a4 := cache.Get(3)
	a5 := cache.Get(4)
	fmt.Println("Input:  [\"LRUCache\",\"put\",\"put\",\"get\",\"put\",\"get\",\"put\",\"get\",\"get\",\"get\"] [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]")
	fmt.Printf("Output: [null, null, null, %d, null, %d, null, %d, %d, %d]\n", a1, a2, a3, a4, a5)

	cache2 := Constructor(1)
	cache2.Put(2, 1)
	b1 := cache2.Get(2)
	cache2.Put(3, 2)
	b2 := cache2.Get(2)
	b3 := cache2.Get(3)
	fmt.Println("Input:  [\"LRUCache\",\"put\",\"get\",\"put\",\"get\",\"get\"] [[1],[2,1],[2],[3,2],[2],[3]]")
	fmt.Printf("Output: [null, null, %d, null, %d, %d]\n", b1, b2, b3)
}
