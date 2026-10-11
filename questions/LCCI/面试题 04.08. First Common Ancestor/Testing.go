package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func lowestCommonAncestor(root *TreeNode, p *TreeNode, q *TreeNode) *TreeNode {
	if root == nil || root == p || root == q {
		return root
	}
	left := lowestCommonAncestor(root.Left, p, q)
	right := lowestCommonAncestor(root.Right, p, q)
	if left != nil && right != nil {
		return root
	}
	if left != nil {
		return left
	}
	return right
}

// ------------------------------- solution end ---------------------------------

func main() {
	n3 := &TreeNode{Val: 3}
	n5 := &TreeNode{Val: 5}
	n1 := &TreeNode{Val: 1}
	n3.Left, n3.Right = n5, n1
	fmt.Println("Input:  root = [3, 5, 1], p = 5, q = 1")
	fmt.Printf("Output: %d\n", lowestCommonAncestor(n3, n5, n1).Val)
}
