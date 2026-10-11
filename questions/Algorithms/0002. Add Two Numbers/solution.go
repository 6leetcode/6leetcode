package main

import (
	"fmt"
)

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	var head = &ListNode{Val: 0}
	n1, n2, carry, current := 0, 0, 0, head
	for l1 != nil || l2 != nil || carry != 0 {
		if l1 == nil {
			n1 = 0
		} else {
			n1 = l1.Val
			l1 = l1.Next
		}
		if l2 == nil {
			n2 = 0
		} else {
			n2 = l2.Val
			l2 = l2.Next
		}
		current.Next = &ListNode{Val: (n1 + n2 + carry) % 10}
		current = current.Next
		carry = (n1 + n2 + carry) / 10
	}
	return head.Next
}

// ------------------------------- solution end ---------------------------------

// Ints2List convert []int to List
func Ints2List(nums []int) (listNode *ListNode) {
	if len(nums) == 0 {
		return nil
	}
	listNode = &ListNode{}
	var t = listNode
	for _, v := range nums {
		t.Next = &ListNode{Val: v}
		t = t.Next
	}
	return listNode.Next
}

// List2Ints convert List to []int
func List2Ints(head *ListNode) (res []int) {
	for head != nil {
		res = append(res, head.Val)
		head = head.Next
	}
	return
}

func show(head *ListNode) {
	var first = true
	for head != nil {
		if first {
			fmt.Printf("%d", head.Val)
			first = false
		} else {
			fmt.Printf(" -> %d", head.Val)
		}
		head = head.Next
	}
	fmt.Println()
}

func main() {
	var l1 = Ints2List([]int{2, 4, 3})
	fmt.Printf("Input:  ")
	show(l1)
	var l2 = Ints2List([]int{5, 6, 4})
	fmt.Printf("Input:  ")
	show(l2)
	var res = addTwoNumbers(l1, l2)
	fmt.Printf("Output: ")
	show(res)
}
