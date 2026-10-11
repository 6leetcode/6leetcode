package main

import "fmt"

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func generateTrees(n int) []*TreeNode {
	if n == 0 {
		return nil
	}
	var gen func(start, end int) []*TreeNode
	gen = func(start, end int) []*TreeNode {
		if start > end {
			return []*TreeNode{nil}
		}
		var res []*TreeNode
		for i := start; i <= end; i++ {
			lefts := gen(start, i-1)
			rights := gen(i+1, end)
			for _, l := range lefts {
				for _, r := range rights {
					res = append(res, &TreeNode{Val: i, Left: l, Right: r})
				}
			}
		}
		return res
	}
	return gen(1, n)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 3
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", len(generateTrees(input)))
}
