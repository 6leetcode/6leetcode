package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func levelOrderBottom(root *TreeNode) [][]int {
	var res [][]int
	if root == nil {
		return res
	}
	queue := []*TreeNode{root}
	for len(queue) > 0 {
		size := len(queue)
		level := make([]int, 0, size)
		for i := 0; i < size; i++ {
			node := queue[0]
			queue = queue[1:]
			level = append(level, node.Val)
			if node.Left != nil {
				queue = append(queue, node.Left)
			}
			if node.Right != nil {
				queue = append(queue, node.Right)
			}
		}
		res = append(res, level)
	}
	for i, j := 0, len(res)-1; i < j; i, j = i+1, j-1 {
		res[i], res[j] = res[j], res[i]
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	t1 := &TreeNode{Val: 3, Left: &TreeNode{Val: 9}}
	t1.Right = &TreeNode{Val: 20, Left: &TreeNode{Val: 15}, Right: &TreeNode{Val: 7}}
	fmt.Println("Input:  [3, 9, 20, null, null, 15, 7]")
	fmt.Printf("Output: %s\n", helper.MatrixShow(levelOrderBottom(t1)))

	t2 := &TreeNode{Val: 1}
	fmt.Println("Input:  [1]")
	fmt.Printf("Output: %s\n", helper.MatrixShow(levelOrderBottom(t2)))

	fmt.Println("Input:  []")
	fmt.Printf("Output: %s\n", helper.MatrixShow(levelOrderBottom(nil)))
}
