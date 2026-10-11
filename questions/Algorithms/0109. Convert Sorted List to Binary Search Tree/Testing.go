package main

import (
	"fmt"
	"strconv"
	"strings"
)

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func sortedListToBST(head *ListNode) *TreeNode {
	var nums []int
	for head != nil {
		nums = append(nums, head.Val)
		head = head.Next
	}
	var build func(lo, hi int) *TreeNode
	build = func(lo, hi int) *TreeNode {
		if lo > hi {
			return nil
		}
		mid := lo + (hi-lo+1)/2
		root := &TreeNode{Val: nums[mid]}
		root.Left = build(lo, mid-1)
		root.Right = build(mid+1, hi)
		return root
	}
	return build(0, len(nums)-1)
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

func intsShow(nums []int) string {
	parts := make([]string, len(nums))
	for i, v := range nums {
		parts[i] = strconv.Itoa(v)
	}
	return "[" + strings.Join(parts, ", ") + "]"
}

func treeShow(root *TreeNode) string {
	if root == nil {
		return "[]"
	}
	var parts []string
	queue := []*TreeNode{root}
	for len(queue) > 0 {
		node := queue[0]
		queue = queue[1:]
		if node == nil {
			parts = append(parts, "null")
		} else {
			parts = append(parts, strconv.Itoa(node.Val))
			queue = append(queue, node.Left, node.Right)
		}
	}
	for len(parts) > 0 && parts[len(parts)-1] == "null" {
		parts = parts[:len(parts)-1]
	}
	return "[" + strings.Join(parts, ", ") + "]"
}

func main() {
	head1 := ints2List([]int{-10, -3, 0, 5, 9})
	fmt.Printf("Input:  head = %s\n", intsShow([]int{-10, -3, 0, 5, 9}))
	fmt.Printf("Output: %s\n", treeShow(sortedListToBST(head1)))

	head2 := ints2List([]int{})
	fmt.Printf("Input:  head = %s\n", intsShow([]int{}))
	fmt.Printf("Output: %s\n", treeShow(sortedListToBST(head2)))
}
