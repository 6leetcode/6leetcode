package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func pathSum(root *TreeNode, sum int) int {
	var count func(node *TreeNode, target int64) int
	count = func(node *TreeNode, target int64) int {
		if node == nil {
			return 0
		}
		res := 0
		if int64(node.Val) == target {
			res = 1
		}
		res += count(node.Left, target-int64(node.Val))
		res += count(node.Right, target-int64(node.Val))
		return res
	}
	if root == nil {
		return 0
	}
	return count(root, int64(sum)) + pathSum(root.Left, sum) + pathSum(root.Right, sum)
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	sum := 3
	fmt.Printf("Input:  [1, 2, 3], sum = %d\n", sum)
	fmt.Printf("Output: %d\n", pathSum(root, sum))
}
