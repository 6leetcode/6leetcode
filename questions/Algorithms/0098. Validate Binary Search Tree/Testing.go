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
func isValidBST(root *TreeNode) bool {
	var validate func(node *TreeNode, min, max int64) bool
	validate = func(node *TreeNode, min, max int64) bool {
		if node == nil {
			return true
		}
		if int64(node.Val) <= min || int64(node.Val) >= max {
			return false
		}
		return validate(node.Left, min, int64(node.Val)) && validate(node.Right, int64(node.Val), max)
	}
	return validate(root, math.MinInt64, math.MaxInt64)
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 2, Left: &TreeNode{Val: 1}, Right: &TreeNode{Val: 3}}
	fmt.Println("Input:  [2, 1, 3]")
	fmt.Printf("Output: %t\n", isValidBST(root))
}
