package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func removeNthFromEnd(head *ListNode, n int) *ListNode {
	dummy := &ListNode{Next: head}
	fast, slow := dummy, dummy
	for i := 0; i < n; i++ {
		fast = fast.Next
	}
	for fast.Next != nil {
		fast = fast.Next
		slow = slow.Next
	}
	slow.Next = slow.Next.Next
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
	var input1 = ints2List([]int{1, 2, 3, 4, 5})
	var input2 = 2
	fmt.Printf("Input:  %v %d\n", list2Ints(input1), input2)
	fmt.Printf("Output: %v\n", list2Ints(removeNthFromEnd(input1, input2)))
}
