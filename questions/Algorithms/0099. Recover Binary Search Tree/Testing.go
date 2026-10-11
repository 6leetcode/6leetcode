package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func recoverTree(root *TreeNode) {
	var vals []int
	var collect func(node *TreeNode)
	collect = func(node *TreeNode) {
		if node == nil {
			return
		}
		collect(node.Left)
		vals = append(vals, node.Val)
		collect(node.Right)
	}
	collect(root)
	i := 0
	for i < len(vals)-1 && vals[i] < vals[i+1] {
		i++
	}
	j := len(vals) - 1
	for j > 0 && vals[j-1] < vals[j] {
		j--
	}
	vals[i], vals[j] = vals[j], vals[i]
	idx := 0
	var assign func(node *TreeNode)
	assign = func(node *TreeNode) {
		if node == nil {
			return
		}
		assign(node.Left)
		node.Val = vals[idx]
		idx++
		assign(node.Right)
	}
	assign(root)
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 1, Right: &TreeNode{Val: 3, Right: &TreeNode{Val: 2}}}
	fmt.Println("Input:  [1, 3, null, null, 2]")
	recoverTree(root)
	var vals []int
	var in func(n *TreeNode)
	in = func(n *TreeNode) {
		if n == nil {
			return
		}
		in(n.Left)
		vals = append(vals, n.Val)
		in(n.Right)
	}
	in(root)
	fmt.Printf("Output: %v\n", vals)
}
