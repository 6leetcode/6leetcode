package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func reverseKGroup(head *ListNode, k int) *ListNode {
	if head == nil {
		return head
	}
	tail := head
	for i := 0; i < k; i++ {
		if tail == nil {
			return head
		}
		tail = tail.Next
	}
	var pre, next *ListNode
	cur := head
	for cur != tail {
		next = cur.Next
		cur.Next = pre
		pre = cur
		cur = next
	}
	head.Next = reverseKGroup(tail, k)
	return pre
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
	fmt.Printf("Input:  %v %d\n", list2Ints(input1), input2)
	fmt.Printf("Output: %v\n", list2Ints(reverseKGroup(input1, input2)))
}
