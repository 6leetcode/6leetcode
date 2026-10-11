package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func inorderSuccessor(root *TreeNode, p *TreeNode) *TreeNode {
	if p.Right != nil {
		node := p.Right
		for node.Left != nil {
			node = node.Left
		}
		return node
	}
	var succ *TreeNode
	node := root
	for node != nil {
		if p.Val < node.Val {
			succ = node
			node = node.Left
		} else if p.Val > node.Val {
			node = node.Right
		} else {
			break
		}
	}
	return succ
}

// ------------------------------- solution end ---------------------------------

func main() {
	n2 := &TreeNode{Val: 2}
	n1 := &TreeNode{Val: 1}
	n3 := &TreeNode{Val: 3}
	n2.Left, n2.Right = n1, n3
	fmt.Println("Input:  root = [2, 1, 3], p = 1")
	res := inorderSuccessor(n2, n1)
	if res != nil {
		fmt.Printf("Output: %d\n", res.Val)
	} else {
		fmt.Println("Output: null")
	}
}
