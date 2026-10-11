package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func rotateRight(head *ListNode, k int) *ListNode {
	if head == nil || head.Next == nil || k == 0 {
		return head
	}
	length := 1
	tail := head
	for tail.Next != nil {
		tail = tail.Next
		length++
	}
	k %= length
	if k == 0 {
		return head
	}
	tail.Next = head
	newTail := head
	for i := 0; i < length-k-1; i++ {
		newTail = newTail.Next
	}
	newHead := newTail.Next
	newTail.Next = nil
	return newHead
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

func main() {
	var input1 = ints2List([]int{1, 2, 3, 4, 5})
	var input2 = 2
	fmt.Printf("Input:  %v, %d\n", list2Ints(input1), input2)
	fmt.Printf("Output: %v\n", list2Ints(rotateRight(input1, input2)))
}
