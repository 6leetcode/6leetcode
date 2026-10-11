package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func isMirror(a, b *TreeNode) bool {
	if a == nil && b == nil {
		return true
	}
	if a == nil || b == nil {
		return false
	}
	return a.Val == b.Val && isMirror(a.Left, b.Right) && isMirror(a.Right, b.Left)
}

func isSymmetric(root *TreeNode) bool {
	return isMirror(root, root)
}

// ------------------------------- solution end ---------------------------------

func main() {
	node1 := &TreeNode{Val: 1}
	node2 := &TreeNode{Val: 2}
	node3 := &TreeNode{Val: 2}
	node1.Left, node1.Right = node2, node3
	fmt.Println("Input:  [1, 2, 2]")
	fmt.Printf("Output: %t\n", isSymmetric(node1))
}
