package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func reorderList(head *ListNode) {
	if head == nil || head.Next == nil {
		return
	}

	slow, fast := head, head
	for fast.Next != nil && fast.Next.Next != nil {
		slow = slow.Next
		fast = fast.Next.Next
	}

	second := slow.Next
	slow.Next = nil

	var prev *ListNode
	for second != nil {
		nxt := second.Next
		second.Next = prev
		prev = second
		second = nxt
	}

	first := head
	second = prev
	for second != nil {
		fnext := first.Next
		snext := second.Next
		first.Next = second
		second.Next = fnext
		first = fnext
		second = snext
	}
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
	fmt.Printf("Input:  %v\n", list2Ints(ints2List(nums)))
	reorderList(input)
	fmt.Printf("Output: %v\n", list2Ints(input))
}

func main() {
	run([]int{1, 2, 3, 4})
	run([]int{1, 2, 3, 4, 5})
	run([]int{1})
}
