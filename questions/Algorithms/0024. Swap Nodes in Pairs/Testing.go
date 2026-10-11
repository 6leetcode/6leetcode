package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func swapPairs(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}
	newHead := head.Next
	head.Next = swapPairs(newHead.Next)
	newHead.Next = head
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
	var input = ints2List([]int{1, 2, 3, 4})
	fmt.Printf("Input:  %v\n", list2Ints(input))
	fmt.Printf("Output: %v\n", list2Ints(swapPairs(input)))
}
