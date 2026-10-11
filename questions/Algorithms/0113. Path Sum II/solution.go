package main

import (
	"fmt"
	"strings"
)

// TreeNode ..
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// ------------------------------- solution begin -------------------------------
func pathSum(root *TreeNode, targetSum int) [][]int {
	res := [][]int{}
	var dfs func(node *TreeNode, remain int, path []int)
	dfs = func(node *TreeNode, remain int, path []int) {
		if node == nil {
			return
		}
		path = append(path, node.Val)
		remain -= node.Val
		if node.Left == nil && node.Right == nil {
			if remain == 0 {
				cur := make([]int, len(path))
				copy(cur, path)
				res = append(res, cur)
			}
			return
		}
		dfs(node.Left, remain, path)
		dfs(node.Right, remain, path)
	}
	dfs(root, targetSum, []int{})
	return res
}

// ------------------------------- solution end ---------------------------------

func matrixShow(m [][]int) string {
	rows := make([]string, 0, len(m))
	for _, row := range m {
		items := make([]string, len(row))
		for i, v := range row {
			items[i] = fmt.Sprintf("%d", v)
		}
		rows = append(rows, "["+strings.Join(items, ", ")+"]")
	}
	return "[" + strings.Join(rows, ", ") + "]"
}

func main() {
	root1 := &TreeNode{Val: 5,
		Left: &TreeNode{Val: 4, Left: &TreeNode{Val: 11,
			Left: &TreeNode{Val: 7}, Right: &TreeNode{Val: 2}}},
		Right: &TreeNode{Val: 8,
			Left:  &TreeNode{Val: 13},
			Right: &TreeNode{Val: 4, Left: &TreeNode{Val: 5}, Right: &TreeNode{Val: 1}}}}
	root2 := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}, Right: &TreeNode{Val: 3}}
	root3 := &TreeNode{Val: 1, Left: &TreeNode{Val: 2}}

	fmt.Println("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22")
	fmt.Printf("Output: %s\n", matrixShow(pathSum(root1, 22)))

	fmt.Println("Input:  [1, 2, 3], targetSum = 5")
	fmt.Printf("Output: %s\n", matrixShow(pathSum(root2, 5)))

	fmt.Println("Input:  [1, 2], targetSum = 0")
	fmt.Printf("Output: %s\n", matrixShow(pathSum(root3, 0)))

	fmt.Println("Input:  [1, 2, 3], targetSum = 3")
	fmt.Printf("Output: %s\n", matrixShow(pathSum(root2, 3)))
}
