package main

import "fmt"

// Node ..
type Node struct {
	Val   int
	Left  *Node
	Right *Node
	Next  *Node
}

// ------------------------------- solution begin -------------------------------
func connect(root *Node) *Node {
	if root == nil || root.Left == nil {
		return root
	}
	root.Left.Next = root.Right
	if root.Next != nil {
		root.Right.Next = root.Next.Left
	}
	connect(root.Left)
	connect(root.Right)
	return root
}

// ------------------------------- solution end ---------------------------------

func firstOfNextLevel(cur *Node) *Node {
	for cur != nil {
		if cur.Left != nil {
			return cur.Left
		}
		if cur.Right != nil {
			return cur.Right
		}
		cur = cur.Next
	}
	return nil
}

func show(root *Node) {
	parts := ""
	first := true
	cur := root
	for cur != nil {
		node := cur
		for node != nil {
			if !first {
				parts += ","
			}
			parts += fmt.Sprintf("%d", node.Val)
			first = false
			node = node.Next
		}
		if !first {
			parts += ","
		}
		parts += "#"
		first = false
		cur = firstOfNextLevel(cur)
	}
	fmt.Printf("[%s]\n", parts)
}

func main() {
	root := &Node{Val: 1}
	root.Left = &Node{Val: 2}
	root.Right = &Node{Val: 3}
	root.Left.Left = &Node{Val: 4}
	root.Left.Right = &Node{Val: 5}
	root.Right.Left = &Node{Val: 6}
	root.Right.Right = &Node{Val: 7}

	fmt.Println("Input:  [1, 2, 3, 4, 5, 6, 7]")
	fmt.Print("Output: ")
	show(connect(root))

	fmt.Println("Input:  []")
	fmt.Print("Output: ")
	show(connect(nil))
}
