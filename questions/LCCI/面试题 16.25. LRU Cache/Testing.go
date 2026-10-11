package main

import (
	"container/list"
	"fmt"
)

// ------------------------------- solution begin -------------------------------
type entry struct {
	key, value int
}

type LRUCache struct {
	capacity int
	items    *list.List
	index    map[int]*list.Element
}

func Constructor(capacity int) LRUCache {
	return LRUCache{capacity: capacity, items: list.New(), index: map[int]*list.Element{}}
}

func (c *LRUCache) Get(key int) int {
	if el, ok := c.index[key]; ok {
		c.items.MoveToFront(el)
		return el.Value.(*entry).value
	}
	return -1
}

func (c *LRUCache) Put(key int, value int) {
	if el, ok := c.index[key]; ok {
		el.Value.(*entry).value = value
		c.items.MoveToFront(el)
		return
	}
	if c.items.Len() == c.capacity {
		back := c.items.Back()
		c.items.Remove(back)
		delete(c.index, back.Value.(*entry).key)
	}
	el := c.items.PushFront(&entry{key, value})
	c.index[key] = el
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println("Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)")
	cache := Constructor(2)
	cache.Put(1, 1)
	cache.Put(2, 2)
	a := cache.Get(1)
	cache.Put(3, 3)
	b := cache.Get(2)
	cache.Put(4, 4)
	c := cache.Get(1)
	d := cache.Get(3)
	e := cache.Get(4)
	fmt.Printf("Output: [%d, %d, %d, %d, %d]\n", a, b, c, d, e)
}
