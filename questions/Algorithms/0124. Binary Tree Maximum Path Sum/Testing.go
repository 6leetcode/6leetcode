package main

import (
	"fmt"
	"math"
)

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func maxPathSum(root *TreeNode) int {
	best := math.MinInt32
	var gain func(node *TreeNode) int
	gain = func(node *TreeNode) int {
		if node == nil {
			return 0
		}
		left := gain(node.Left)
		if left < 0 {
			left = 0
		}
		right := gain(node.Right)
		if right < 0 {
			right = 0
		}
		if node.Val+left+right > best {
			best = node.Val + left + right
		}
		if left > right {
			return node.Val + left
		}
		return node.Val + right
	}
	gain(root)
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	root1 := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	root2 := &TreeNode{Val: -10,
		Left: &TreeNode{Val: 9},
		Right: &TreeNode{Val: 20,
			Left: &TreeNode{Val: 15}, Right: &TreeNode{Val: 7}}}
	root3 := &TreeNode{Val: -3}
	root4 := &TreeNode{Val: 2, Left: &TreeNode{Val: -1}, Right: &TreeNode{Val: -2}}

	fmt.Println("Input:  [1, 2, 3]")
	fmt.Printf("Output: %d\n", maxPathSum(root1))

	fmt.Println("Input:  [-10, 9, 20, null, null, 15, 7]")
	fmt.Printf("Output: %d\n", maxPathSum(root2))

	fmt.Println("Input:  [-3]")
	fmt.Printf("Output: %d\n", maxPathSum(root3))

	fmt.Println("Input:  [2, -1, -2]")
	fmt.Printf("Output: %d\n", maxPathSum(root4))
}
