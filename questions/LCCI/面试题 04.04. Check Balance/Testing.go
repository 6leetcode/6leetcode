package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func isBalanced(root *TreeNode) bool {
	var height func(node *TreeNode) int
	height = func(node *TreeNode) int {
		if node == nil {
			return 0
		}
		l := height(node.Left)
		if l == -1 {
			return -1
		}
		r := height(node.Right)
		if r == -1 {
			return -1
		}
		d := l - r
		if d < 0 {
			d = -d
		}
		if d > 1 {
			return -1
		}
		if l > r {
			return 1 + l
		}
		return 1 + r
	}
	return height(root) != -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 3, Left: &TreeNode{Val: 9}, Right: &TreeNode{Val: 20}}
	root.Right.Left = &TreeNode{Val: 15}
	root.Right.Right = &TreeNode{Val: 7}
	fmt.Println("Input:  [3, 9, 20, null, null, 15, 7]")
	fmt.Printf("Output: %t\n", isBalanced(root))
}
