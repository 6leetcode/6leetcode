package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func inorderTraversal(root *TreeNode) []int {
	var res []int
	var inorder func(node *TreeNode)
	inorder = func(node *TreeNode) {
		if node == nil {
			return
		}
		inorder(node.Left)
		res = append(res, node.Val)
		inorder(node.Right)
	}
	inorder(root)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	fmt.Println("Input:  [1, 2, 3]")
	fmt.Printf("Output: %v\n", inorderTraversal(root))
}
