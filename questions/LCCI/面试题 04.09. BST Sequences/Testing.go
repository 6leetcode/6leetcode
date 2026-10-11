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
func BSTSequences(root *TreeNode) [][]int {
	if root == nil {
		return [][]int{{}}
	}
	left := BSTSequences(root.Left)
	right := BSTSequences(root.Right)
	var res [][]int
	var weave func(l, r []int, prefix []int)
	weave = func(l, r []int, prefix []int) {
		if len(l) == 0 && len(r) == 0 {
			tmp := make([]int, len(prefix))
			copy(tmp, prefix)
			res = append(res, tmp)
			return
		}
		if len(l) > 0 {
			weave(l[1:], r, append(prefix, l[0]))
		}
		if len(r) > 0 {
			weave(l, r[1:], append(prefix, r[0]))
		}
	}
	for _, l := range left {
		for _, r := range right {
			weave(l, r, []int{root.Val})
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	root := &TreeNode{Val: 2, Left: &TreeNode{Val: 1}, Right: &TreeNode{Val: 3}}
	fmt.Println("Input:  [2, 1, 3]")
	fmt.Printf("Output: %s\n", helper.MatrixShow(BSTSequences(root)))
}
