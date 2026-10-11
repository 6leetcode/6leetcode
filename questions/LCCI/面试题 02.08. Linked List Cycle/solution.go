package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func detectCycle(head *ListNode) *ListNode {
	slow, fast := head, head
	for fast != nil && fast.Next != nil {
		slow = slow.Next
		fast = fast.Next.Next
		if slow == fast {
			p := head
			for p != slow {
				p = p.Next
				slow = slow.Next
			}
			return p
		}
	}
	return nil
}

// ------------------------------- solution end ---------------------------------

func main() {
	n1 := &ListNode{Val: 3}
	n2 := &ListNode{Val: 2}
	n3 := &ListNode{Val: 0}
	n4 := &ListNode{Val: -4}
	n1.Next, n2.Next, n3.Next, n4.Next = n2, n3, n4, n2
	fmt.Println("Input:  [3, 2, 0, -4], pos = 1")
	res := detectCycle(n1)
	if res != nil {
		fmt.Printf("Output: tail connects to node with value %d\n", res.Val)
	} else {
		fmt.Println("Output: no cycle")
	}
}
