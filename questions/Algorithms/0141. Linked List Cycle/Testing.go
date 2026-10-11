package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func hasCycle(head *ListNode) bool {
	slow, fast := head, head
	for fast != nil && fast.Next != nil {
		slow = slow.Next
		fast = fast.Next.Next
		if slow == fast {
			return true
		}
	}
	return false
}

// ------------------------------- solution end ---------------------------------

func ints2List(nums []int, pos int) *ListNode {
	dummy := &ListNode{}
	cur := dummy
	var nodes []*ListNode
	for _, v := range nums {
		cur.Next = &ListNode{Val: v}
		cur = cur.Next
		nodes = append(nodes, cur)
	}
	if pos >= 0 && len(nodes) > 0 {
		cur.Next = nodes[pos]
	}
	return dummy.Next
}

func run(nums []int, pos int) {
	fmt.Printf("Input:  head = %v, pos = %d\n", nums, pos)
	fmt.Printf("Output: %t\n", hasCycle(ints2List(nums, pos)))
}

func main() {
	run([]int{3, 2, 0, -4}, 1)
	run([]int{1, 2}, 0)
	run([]int{1}, -1)
	run([]int{}, -1)
}
