package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func checkSubTree(t1 *TreeNode, t2 *TreeNode) bool {
	var same func(a, b *TreeNode) bool
	same = func(a, b *TreeNode) bool {
		if a == nil && b == nil {
			return true
		}
		if a == nil || b == nil {
			return false
		}
		return a.Val == b.Val && same(a.Left, b.Left) && same(a.Right, b.Right)
	}
	if t2 == nil {
		return true
	}
	if t1 == nil {
		return false
	}
	return same(t1, t2) || checkSubTree(t1.Left, t2) || checkSubTree(t1.Right, t2)
}

// ------------------------------- solution end ---------------------------------

func main() {
	a3 := &TreeNode{Val: 3}
	a4 := &TreeNode{Val: 4}
	a5 := &TreeNode{Val: 5}
	a1 := &TreeNode{Val: 1}
	a2 := &TreeNode{Val: 2}
	a3.Left, a3.Right = a4, a5
	a4.Left, a4.Right = a1, a2
	b4 := &TreeNode{Val: 4, Left: &TreeNode{Val: 1}, Right: &TreeNode{Val: 2}}
	fmt.Println("Input:  t1 = [3,4,5,1,2], t2 = [4,1,2]")
	fmt.Printf("Output: %t\n", checkSubTree(a3, b4))
}
