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
func buildTree(inorder []int, postorder []int) *TreeNode {
	var build func(inStart, inEnd, postStart, postEnd int) *TreeNode
	build = func(inStart, inEnd, postStart, postEnd int) *TreeNode {
		if inStart > inEnd {
			return nil
		}
		rootVal := postorder[postEnd]
		idx := inStart
		for inorder[idx] != rootVal {
			idx++
		}
		leftLen := idx - inStart
		root := &TreeNode{Val: rootVal}
		root.Left = build(inStart, idx-1, postStart, postStart+leftLen-1)
		root.Right = build(idx+1, inEnd, postStart+leftLen, postEnd-1)
		return root
	}
	return build(0, len(inorder)-1, 0, len(postorder)-1)
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
	inorder1 := []int{9, 3, 15, 20, 7}
	postorder1 := []int{9, 15, 7, 20, 3}
	fmt.Printf("Input:  inorder = %s, postorder = %s\n", intsShow(inorder1), intsShow(postorder1))
	fmt.Printf("Output: %s\n", treeShow(buildTree(inorder1, postorder1)))

	inorder2 := []int{-1}
	postorder2 := []int{-1}
	fmt.Printf("Input:  inorder = %s, postorder = %s\n", intsShow(inorder2), intsShow(postorder2))
	fmt.Printf("Output: %s\n", treeShow(buildTree(inorder2, postorder2)))
}
