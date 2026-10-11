package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func minDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}
	if root.Left == nil && root.Right == nil {
		return 1
	}
	if root.Left == nil {
		return minDepth(root.Right) + 1
	}
	if root.Right == nil {
		return minDepth(root.Left) + 1
	}
	left := minDepth(root.Left)
	right := minDepth(root.Right)
	if left < right {
		return left + 1
	}
	return right + 1
}

// ------------------------------- solution end ---------------------------------

func main() {
	t1 := &TreeNode{Val: 3, Left: &TreeNode{Val: 9}}
	t1.Right = &TreeNode{Val: 20, Left: &TreeNode{Val: 15}, Right: &TreeNode{Val: 7}}
	fmt.Println("Input:  [3, 9, 20, null, null, 15, 7]")
	fmt.Printf("Output: %d\n", minDepth(t1))

	t2 := &TreeNode{Val: 2}
	t2.Right = &TreeNode{Val: 3}
	t2.Right.Right = &TreeNode{Val: 4}
	t2.Right.Right.Right = &TreeNode{Val: 5}
	t2.Right.Right.Right.Right = &TreeNode{Val: 6}
	fmt.Println("Input:  [2, null, 3, null, 4, null, 5, null, 6]")
	fmt.Printf("Output: %d\n", minDepth(t2))
}
