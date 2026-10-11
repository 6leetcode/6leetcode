package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func sortedArrayToBST(nums []int) *TreeNode {
	var build func(lo, hi int) *TreeNode
	build = func(lo, hi int) *TreeNode {
		if lo > hi {
			return nil
		}
		mid := lo + (hi-lo)/2
		root := &TreeNode{Val: nums[mid]}
		root.Left = build(lo, mid-1)
		root.Right = build(mid+1, hi)
		return root
	}
	return build(0, len(nums)-1)
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{-10, -3, 0, 5, 9}
	fmt.Println("Input:  [-10, -3, 0, 5, 9]")
	root := sortedArrayToBST(nums)
	var pre []int
	var walk func(n *TreeNode)
	walk = func(n *TreeNode) {
		if n == nil {
			return
		}
		pre = append(pre, n.Val)
		walk(n.Left)
		walk(n.Right)
	}
	walk(root)
	fmt.Printf("Output: %v\n", pre)
}
