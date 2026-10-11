package main

import (
	"fmt"
	"strings"
)

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func postorderTraversal(root *TreeNode) []int {
	out := []int{}
	var dfs func(node *TreeNode)
	dfs = func(node *TreeNode) {
		if node == nil {
			return
		}
		dfs(node.Left)
		dfs(node.Right)
		out = append(out, node.Val)
	}
	dfs(root)
	return out
}

// ------------------------------- solution end ---------------------------------

func intsShow(nums []int) string {
	items := make([]string, len(nums))
	for i, v := range nums {
		items[i] = fmt.Sprintf("%d", v)
	}
	return "[" + strings.Join(items, ", ") + "]"
}

func main() {
	b3 := &TreeNode{Val: 3}
	b2 := &TreeNode{Val: 2, Left: b3}
	root1 := &TreeNode{Val: 1, Right: b2}

	root2 := &TreeNode{Val: 1}

	c4 := &TreeNode{Val: 4}
	c5 := &TreeNode{Val: 5}
	c2 := &TreeNode{Val: 2, Left: c4, Right: c5}
	c3 := &TreeNode{Val: 3}
	root3 := &TreeNode{Val: 1, Left: c2, Right: c3}

	fmt.Println("Input:  [1, null, 2, 3]")
	fmt.Printf("Output: %s\n", intsShow(postorderTraversal(root1)))

	fmt.Println("Input:  []")
	fmt.Printf("Output: %s\n", intsShow(postorderTraversal(nil)))

	fmt.Println("Input:  [1]")
	fmt.Printf("Output: %s\n", intsShow(postorderTraversal(root2)))

	fmt.Println("Input:  [1, 2, 3, 4, 5]")
	fmt.Printf("Output: %s\n", intsShow(postorderTraversal(root3)))
}
