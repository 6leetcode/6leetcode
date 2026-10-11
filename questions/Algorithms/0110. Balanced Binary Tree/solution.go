package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func height(node *TreeNode) int {
	if node == nil {
		return 0
	}
	left := height(node.Left)
	if left == -1 {
		return -1
	}
	right := height(node.Right)
	if right == -1 {
		return -1
	}
	if left-right > 1 || right-left > 1 {
		return -1
	}
	if left > right {
		return left + 1
	}
	return right + 1
}

func isBalanced(root *TreeNode) bool {
	return height(root) != -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	t1 := &TreeNode{Val: 3, Left: &TreeNode{Val: 9}}
	t1.Right = &TreeNode{Val: 20, Left: &TreeNode{Val: 15}, Right: &TreeNode{Val: 7}}
	fmt.Println("Input:  [3, 9, 20, null, null, 15, 7]")
	fmt.Printf("Output: %t\n", isBalanced(t1))

	t2 := &TreeNode{Val: 1}
	t2.Left = &TreeNode{Val: 2}
	t2.Right = &TreeNode{Val: 2}
	t2.Left.Left = &TreeNode{Val: 3}
	t2.Left.Right = &TreeNode{Val: 3}
	t2.Left.Left.Left = &TreeNode{Val: 4}
	t2.Left.Left.Right = &TreeNode{Val: 4}
	fmt.Println("Input:  [1, 2, 2, 3, 3, null, null, 4, 4]")
	fmt.Printf("Output: %t\n", isBalanced(t2))

	fmt.Println("Input:  []")
	fmt.Printf("Output: %t\n", isBalanced(nil))
}
