package main

import "fmt"

// Node ..
type Node struct {
	Val       int
	Neighbors []*Node
}

// ------------------------------- solution begin -------------------------------
func cloneGraph(node *Node) *Node {
	if node == nil {
		return nil
	}
	visited := map[*Node]*Node{}

	var dfs func(*Node) *Node
	dfs = func(n *Node) *Node {
		if n == nil {
			return nil
		}
		if copy, ok := visited[n]; ok {
			return copy
		}
		copy := &Node{Val: n.Val}
		visited[n] = copy
		for _, neighbor := range n.Neighbors {
			copy.Neighbors = append(copy.Neighbors, dfs(neighbor))
		}
		return copy
	}

	return dfs(node)
}

// ------------------------------- solution end ---------------------------------

func printGraph(node *Node) string {
	byVal := map[int]*Node{}

	var collect func(*Node)
	collect = func(n *Node) {
		if n == nil {
			return
		}
		if _, ok := byVal[n.Val]; ok {
			return
		}
		byVal[n.Val] = n
		for _, neighbor := range n.Neighbors {
			collect(neighbor)
		}
	}
	collect(node)

	max := 0
	for v := range byVal {
		if v > max {
			max = v
		}
	}

	res := "["
	for v := 1; v <= max; v++ {
		if v > 1 {
			res += ", "
		}
		res += "["
		for i, neighbor := range byVal[v].Neighbors {
			if i > 0 {
				res += ", "
			}
			res += fmt.Sprintf("%d", neighbor.Val)
		}
		res += "]"
	}
	res += "]"
	return res
}

func main() {
	n1 := &Node{Val: 1}
	n2 := &Node{Val: 2}
	n3 := &Node{Val: 3}
	n4 := &Node{Val: 4}
	n1.Neighbors = []*Node{n2, n4}
	n2.Neighbors = []*Node{n1, n3}
	n3.Neighbors = []*Node{n2, n4}
	n4.Neighbors = []*Node{n1, n3}

	fmt.Println("Input:  [[2, 4], [1, 3], [2, 4], [1, 3]]")
	fmt.Println("Output:", printGraph(cloneGraph(n1)))
}
