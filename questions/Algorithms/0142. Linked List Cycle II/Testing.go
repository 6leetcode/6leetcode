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

func ints2List(nums []int, pos int) (*ListNode, []*ListNode) {
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
	return dummy.Next, nodes
}

func run(nums []int, pos int) {
	fmt.Printf("Input:  head = %v, pos = %d\n", nums, pos)
	head, nodes := ints2List(nums, pos)
	res := detectCycle(head)
	idx := -1
	for i, n := range nodes {
		if n == res {
			idx = i
			break
		}
	}
	if idx < 0 {
		fmt.Println("Output: null")
	} else {
		fmt.Printf("Output: %d\n", idx)
	}
}

func main() {
	run([]int{3, 2, 0, -4}, 1)
	run([]int{1, 2}, 0)
	run([]int{1}, -1)
	run([]int{}, -1)
}
