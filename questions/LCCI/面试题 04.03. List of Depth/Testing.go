package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ListNode ..
type ListNode struct {
	Val  int
	Next *ListNode
}

// ------------------------------- solution begin -------------------------------
func listOfDepth(tree *TreeNode) []*ListNode {
	res := []*ListNode{}
	if tree == nil {
		return res
	}
	queue := []*TreeNode{tree}
	for len(queue) > 0 {
		levelSize := len(queue)
		dummy := &ListNode{}
		lt := dummy
		for i := 0; i < levelSize; i++ {
			node := queue[0]
			queue = queue[1:]
			lt.Next = &ListNode{Val: node.Val}
			lt = lt.Next
			if node.Left != nil {
				queue = append(queue, node.Left)
			}
			if node.Right != nil {
				queue = append(queue, node.Right)
			}
		}
		res = append(res, dummy.Next)
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	root.Left.Left = &TreeNode{Val: 4}
	root.Left.Right = &TreeNode{Val: 5}
	root.Right.Right = &TreeNode{Val: 7}
	root.Left.Left.Left = &TreeNode{Val: 8}
	fmt.Println("Input:  [1, 2, 3, 4, 5, null, 7, 8]")
	res := listOfDepth(root)
	fmt.Print("Output: [")
	for i, l := range res {
		if i > 0 {
			fmt.Print(", ")
		}
		fmt.Print("[")
		first := true
		for p := l; p != nil; p = p.Next {
			if !first {
				fmt.Print(", ")
			}
			first = false
			fmt.Print(p.Val)
		}
		fmt.Print("]")
	}
	fmt.Println("]")
}
