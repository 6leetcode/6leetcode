package main

import "fmt"

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func mergeTwoLists(a, b *ListNode) *ListNode {
	if a == nil {
		return b
	}
	if b == nil {
		return a
	}
	if a.Val < b.Val {
		a.Next = mergeTwoLists(a.Next, b)
		return a
	}
	b.Next = mergeTwoLists(a, b.Next)
	return b
}

func mergeKLists(lists []*ListNode) *ListNode {
	var ans *ListNode
	for _, l := range lists {
		ans = mergeTwoLists(ans, l)
	}
	return ans
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
	input := []*ListNode{
		ints2List([]int{1, 4, 5}),
		ints2List([]int{1, 3, 4}),
		ints2List([]int{2, 6}),
	}
	fmt.Println("Input: ", input[0], input[1], input[2])
	fmt.Printf("Output: %v\n", list2Ints(mergeKLists(input)))
}
