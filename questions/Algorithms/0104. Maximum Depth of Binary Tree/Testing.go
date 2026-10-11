package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}
	left := maxDepth(root.Left)
	right := maxDepth(root.Right)
	if left > right {
		return left + 1
	}
	return right + 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	t1 := &TreeNode{Val: 3, Left: &TreeNode{Val: 9}}
	t1.Right = &TreeNode{Val: 20, Left: &TreeNode{Val: 15}, Right: &TreeNode{Val: 7}}
	fmt.Println("Input:  [3, 9, 20, null, null, 15, 7]")
	fmt.Printf("Output: %d\n", maxDepth(t1))

	t2 := &TreeNode{Val: 1, Right: &TreeNode{Val: 2}}
	fmt.Println("Input:  [1, null, 2]")
	fmt.Printf("Output: %d\n", maxDepth(t2))
}
