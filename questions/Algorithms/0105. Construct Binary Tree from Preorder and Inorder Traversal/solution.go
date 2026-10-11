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
func buildTree(preorder []int, inorder []int) *TreeNode {
	var build func(preStart, preEnd, inStart, inEnd int) *TreeNode
	build = func(preStart, preEnd, inStart, inEnd int) *TreeNode {
		if preStart > preEnd {
			return nil
		}
		rootVal := preorder[preStart]
		idx := inStart
		for inorder[idx] != rootVal {
			idx++
		}
		leftLen := idx - inStart
		root := &TreeNode{Val: rootVal}
		root.Left = build(preStart+1, preStart+leftLen, inStart, idx-1)
		root.Right = build(preStart+leftLen+1, preEnd, idx+1, inEnd)
		return root
	}
	return build(0, len(preorder)-1, 0, len(inorder)-1)
}

// ------------------------------- solution end ---------------------------------

func intsShow(nums []int) string {
	parts := make([]string, len(nums))
	for i, v := range nums {
		parts[i] = strconv.Itoa(v)
	}
	return "[" + strings.Join(parts, ", ") + "]"
}

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
	preorder1 := []int{3, 9, 20, 15, 7}
	inorder1 := []int{9, 3, 15, 20, 7}
	fmt.Printf("Input:  preorder = %s, inorder = %s\n", intsShow(preorder1), intsShow(inorder1))
	fmt.Printf("Output: %s\n", treeShow(buildTree(preorder1, inorder1)))

	preorder2 := []int{-1}
	inorder2 := []int{-1}
	fmt.Printf("Input:  preorder = %s, inorder = %s\n", intsShow(preorder2), intsShow(inorder2))
	fmt.Printf("Output: %s\n", treeShow(buildTree(preorder2, inorder2)))
}
