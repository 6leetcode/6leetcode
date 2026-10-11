package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type entry struct {
	num   int
	order int
}

type AnimalShelf struct {
	cats  []entry
	dogs  []entry
	order int
}

func Constructor() AnimalShelf {
	return AnimalShelf{}
}

func (a *AnimalShelf) Enqueue(animal []int) {
	if animal[1] == 0 {
		a.cats = append(a.cats, entry{animal[0], a.order})
	} else {
		a.dogs = append(a.dogs, entry{animal[0], a.order})
	}
	a.order++
}

func (a *AnimalShelf) DequeueAny() []int {
	if len(a.cats) == 0 && len(a.dogs) == 0 {
		return []int{-1, -1}
	}
	if len(a.dogs) == 0 || (len(a.cats) > 0 && a.cats[0].order < a.dogs[0].order) {
		res := []int{a.cats[0].num, 0}
		a.cats = a.cats[1:]
		return res
	}
	res := []int{a.dogs[0].num, 1}
	a.dogs = a.dogs[1:]
	return res
}

func (a *AnimalShelf) DequeueDog() []int {
	if len(a.dogs) == 0 {
		return []int{-1, -1}
	}
	res := []int{a.dogs[0].num, 1}
	a.dogs = a.dogs[1:]
	return res
}

func (a *AnimalShelf) DequeueCat() []int {
	if len(a.cats) == 0 {
		return []int{-1, -1}
	}
	res := []int{a.cats[0].num, 0}
	a.cats = a.cats[1:]
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println(`Input:  ["AnimalShelf", "enqueue", "enqueue", "enqueue", "dequeueDog", "dequeueCat", "dequeueAny"]`)
	obj := Constructor()
	obj.Enqueue([]int{0, 0})
	obj.Enqueue([]int{1, 0})
	obj.Enqueue([]int{2, 1})
	r1 := obj.DequeueDog()
	r2 := obj.DequeueCat()
	r3 := obj.DequeueAny()
	fmt.Printf("Output: [null, null, null, null, [%d,%d], [%d,%d], [%d,%d]]\n", r1[0], r1[1], r2[0], r2[1], r3[0], r3[1])
}
