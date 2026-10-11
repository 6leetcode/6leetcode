package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func sumNumbers(root *TreeNode) int {
	var dfs func(node *TreeNode, current int) int
	dfs = func(node *TreeNode, current int) int {
		if node == nil {
			return 0
		}
		current = current*10 + node.Val
		if node.Left == nil && node.Right == nil {
			return current
		}
		return dfs(node.Left, current) + dfs(node.Right, current)
	}
	return dfs(root, 0)
}

// ------------------------------- solution end ---------------------------------

func main() {
	root1 := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	root2 := &TreeNode{Val: 4,
		Left:  &TreeNode{Val: 9, Left: &TreeNode{Val: 5}, Right: &TreeNode{Val: 1}},
		Right: &TreeNode{Val: 0}}
	root3 := &TreeNode{Val: 0}
	root4 := &TreeNode{Val: 1, Left: &TreeNode{Val: 5}}

	fmt.Println("Input:  [1, 2, 3]")
	fmt.Printf("Output: %d\n", sumNumbers(root1))

	fmt.Println("Input:  [4, 9, 0, 5, 1]")
	fmt.Printf("Output: %d\n", sumNumbers(root2))

	fmt.Println("Input:  [0]")
	fmt.Printf("Output: %d\n", sumNumbers(root3))

	fmt.Println("Input:  [1, 5]")
	fmt.Printf("Output: %d\n", sumNumbers(root4))
}
