package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func hasPathSum(root *TreeNode, targetSum int) bool {
	var check func(node *TreeNode, current int) bool
	check = func(node *TreeNode, current int) bool {
		if node == nil {
			return false
		}
		current += node.Val
		if node.Left == nil && node.Right == nil {
			return current == targetSum
		}
		return check(node.Left, current) || check(node.Right, current)
	}
	return check(root, 0)
}

// ------------------------------- solution end ---------------------------------

func main() {
	root1 := &TreeNode{Val: 5,
		Left: &TreeNode{Val: 4, Left: &TreeNode{Val: 11,
			Left: &TreeNode{Val: 7}, Right: &TreeNode{Val: 2}}},
		Right: &TreeNode{Val: 8,
			Left:  &TreeNode{Val: 13},
			Right: &TreeNode{Val: 4, Right: &TreeNode{Val: 1}}}}
	root2 := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	root3 := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}}

	fmt.Println("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], targetSum = 22")
	fmt.Printf("Output: %t\n", hasPathSum(root1, 22))

	fmt.Println("Input:  [1, 2, 3], targetSum = 5")
	fmt.Printf("Output: %t\n", hasPathSum(root2, 5))

	fmt.Println("Input:  [], targetSum = 0")
	fmt.Printf("Output: %t\n", hasPathSum(nil, 0))

	fmt.Println("Input:  [1, 2], targetSum = 3")
	fmt.Printf("Output: %t\n", hasPathSum(root3, 3))
}
