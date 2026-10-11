package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func convertBiNode(root *TreeNode) *TreeNode {
	dummy := &TreeNode{}
	prev := dummy
	var inorder func(node *TreeNode)
	inorder = func(node *TreeNode) {
		if node == nil {
			return
		}
		inorder(node.Left)
		node.Left = nil
		prev.Right = node
		prev = node
		inorder(node.Right)
	}
	inorder(root)
	prev.Right = nil
	return dummy.Right
}

// ------------------------------- solution end ---------------------------------

func main() {
	n4 := &TreeNode{Val: 4}
	n2 := &TreeNode{Val: 2}
	n5 := &TreeNode{Val: 5}
	n1 := &TreeNode{Val: 1}
	n3 := &TreeNode{Val: 3}
	n6 := &TreeNode{Val: 6}
	n0 := &TreeNode{Val: 0}
	n4.Left, n4.Right = n2, n5
	n2.Left, n2.Right = n1, n3
	n5.Right = n6
	n1.Left = n0
	fmt.Println("Input:  [4,2,5,1,3,null,6,0]")
	head := convertBiNode(n4)
	fmt.Print("Output: [")
	first := true
	for p := head; p != nil; p = p.Right {
		if !first {
			fmt.Print(", ")
		}
		first = false
		fmt.Printf("%d, null", p.Val)
	}
	fmt.Println("]")
}
