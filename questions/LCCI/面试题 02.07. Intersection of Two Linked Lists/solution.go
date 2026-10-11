package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func getIntersectionNode(headA *ListNode, headB *ListNode) *ListNode {
	a, b := headA, headB
	for a != b {
		if a == nil {
			a = headB
		} else {
			a = a.Next
		}
		if b == nil {
			b = headA
		} else {
			b = b.Next
		}
	}
	return a
}

// ------------------------------- solution end ---------------------------------

func main() {
	s1 := &ListNode{Val: 8}
	s2 := &ListNode{Val: 4}
	s3 := &ListNode{Val: 5}
	s1.Next, s2.Next = s2, s3
	a2 := &ListNode{Val: 1}
	a1 := &ListNode{Val: 4, Next: a2}
	a2.Next = s1
	b3 := &ListNode{Val: 1, Next: s1}
	b2 := &ListNode{Val: 0, Next: b3}
	b1 := &ListNode{Val: 5, Next: b2}
	fmt.Println("Input:  [4, 1, 8, 4, 5], [5, 0, 1, 8, 4, 5]")
	res := getIntersectionNode(a1, b1)
	if res != nil {
		fmt.Printf("Output: Intersected at '%d'\n", res.Val)
	} else {
		fmt.Println("Output: No intersection")
	}
}
