package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func removeDuplicateNodes(head *ListNode) *ListNode {
	seen := make(map[int]bool)
	dummy := &ListNode{Next: head}
	prev, cur := dummy, head
	for cur != nil {
		if seen[cur.Val] {
			prev.Next = cur.Next
			cur = prev.Next
		} else {
			seen[cur.Val] = true
			prev = cur
			cur = cur.Next
		}
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

func main() {
	var input = ints2List([]int{1, 2, 3, 3, 2, 1})
	fmt.Printf("Input:  %v\n", list2Ints(input))
	fmt.Printf("Output: %v\n", list2Ints(removeDuplicateNodes(input)))
}
