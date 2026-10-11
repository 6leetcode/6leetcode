package main

import (
	"fmt"
	"strconv"
	"strings"
)

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func flatten(root *TreeNode) {
	cur := root
	for cur != nil {
		if cur.Left != nil {
			prev := cur.Left
			for prev.Right != nil {
				prev = prev.Right
			}
			prev.Right = cur.Right
			cur.Right = cur.Left
			cur.Left = nil
		}
		cur = cur.Right
	}
}

// ------------------------------- solution end ---------------------------------

func treeShow(root *TreeNode) string {
	if root == nil {
		return "[]"
	}
	var parts []string
	queue := []*TreeNode{root}
	for len(queue) > 0 {
		node := queue[0]
		queue = queue[1:]
		if node == nil {
			parts = append(parts, "null")
		} else {
			parts = append(parts, strconv.Itoa(node.Val))
			queue = append(queue, node.Left, node.Right)
		}
	}
	for len(parts) > 0 && parts[len(parts)-1] == "null" {
		parts = parts[:len(parts)-1]
	}
	return "[" + strings.Join(parts, ", ") + "]"
}

func main() {
	root1 := &TreeNode{
		Val:   1,
		Left:  &TreeNode{Val: 2, Left: &TreeNode{Val: 3}, Right: &TreeNode{Val: 4}},
		Right: &TreeNode{Val: 5, Right: &TreeNode{Val: 6}},
	}
	fmt.Printf("Input:  root = %s\n", treeShow(root1))
	flatten(root1)
	fmt.Printf("Output: %s\n", treeShow(root1))

	root2 := &TreeNode{Val: 0}
	fmt.Printf("Input:  root = %s\n", treeShow(root2))
	flatten(root2)
	fmt.Printf("Output: %s\n", treeShow(root2))

	var root3 *TreeNode
	fmt.Printf("Input:  root = %s\n", treeShow(root3))
	flatten(root3)
	fmt.Printf("Output: %s\n", treeShow(root3))
}
