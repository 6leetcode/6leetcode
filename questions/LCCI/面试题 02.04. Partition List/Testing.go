package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func partition(head *ListNode, x int) *ListNode {
	lessDummy := &ListNode{}
	greaterDummy := &ListNode{}
	less, greater := lessDummy, greaterDummy
	for cur := head; cur != nil; cur = cur.Next {
		if cur.Val < x {
			less.Next = cur
			less = cur
		} else {
			greater.Next = cur
			greater = cur
		}
	}
	greater.Next = nil
	less.Next = greaterDummy.Next
	return lessDummy.Next
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
	var input1 = ints2List([]int{1, 4, 3, 2, 5, 2})
	var input2 = 3
	fmt.Printf("Input:  %v, %d\n", list2Ints(input1), input2)
	fmt.Printf("Output: %v\n", list2Ints(partition(input1, input2)))
}
