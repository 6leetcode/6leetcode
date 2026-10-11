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
func sortedArrayToBST(nums []int) *TreeNode {
	var build func(lo, hi int) *TreeNode
	build = func(lo, hi int) *TreeNode {
		if lo > hi {
			return nil
		}
		mid := lo + (hi-lo+1)/2
		root := &TreeNode{Val: nums[mid]}
		root.Left = build(lo, mid-1)
		root.Right = build(mid+1, hi)
		return root
	}
	return build(0, len(nums)-1)
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
	nums1 := []int{-10, -3, 0, 5, 9}
	fmt.Printf("Input:  nums = %s\n", intsShow(nums1))
	fmt.Printf("Output: %s\n", treeShow(sortedArrayToBST(nums1)))

	nums2 := []int{1, 3}
	fmt.Printf("Input:  nums = %s\n", intsShow(nums2))
	fmt.Printf("Output: %s\n", treeShow(sortedArrayToBST(nums2)))
}
