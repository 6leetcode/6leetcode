package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func insertionSortList(head *ListNode) *ListNode {
	dummy := &ListNode{}
	cur := head
	for cur != nil {
		next := cur.Next
		prev := dummy
		for prev.Next != nil && prev.Next.Val < cur.Val {
			prev = prev.Next
		}
		cur.Next = prev.Next
		prev.Next = cur
		cur = next
	}
	return dummy.Next
}

// ------------------------------- solution end ---------------------------------

func ints2List(nums []int) *ListNode {
	dummy := &ListNode{}
	cur := dummy
	for _, v := range nums {
		cur.Next = &ListNode{Val: v}
		cur = cur.Next
	}
	return dummy.Next
}

func list2Ints(head *ListNode) (res []int) {
	for head != nil {
		res = append(res, head.Val)
		head = head.Next
	}
	return
}

func run(nums []int) {
	input := ints2List(nums)
	fmt.Printf("Input:  %v\n", list2Ints(input))
	fmt.Printf("Output: %v\n", list2Ints(insertionSortList(input)))
}

func main() {
	run([]int{4, 2, 1, 3})
	run([]int{-1, 5, 3, 4, 0})
}
