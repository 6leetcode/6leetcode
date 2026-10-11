package main

import "fmt"

// Node ..
type Node struct {
	Val    int
	Next   *Node
	Random *Node
}

// ------------------------------- solution begin -------------------------------
func copyRandomList(head *Node) *Node {
	if head == nil {
		return nil
	}
	mapping := map[*Node]*Node{}
	for cur := head; cur != nil; cur = cur.Next {
		mapping[cur] = &Node{Val: cur.Val}
	}
	for cur := head; cur != nil; cur = cur.Next {
		mapping[cur].Next = mapping[cur.Next]
		mapping[cur].Random = mapping[cur.Random]
	}
	return mapping[head]
}

// ------------------------------- solution end ---------------------------------

func main() {
	vals := []int{7, 13, 11, 10, 1}
	randoms := []int{-1, 0, 4, 2, 0}
	size := len(vals)

	nodes := make([]*Node, size)
	for i := 0; i < size; i++ {
		nodes[i] = &Node{Val: vals[i]}
	}
	for i := 0; i < size; i++ {
		if i+1 < size {
			nodes[i].Next = nodes[i+1]
		}
		if randoms[i] >= 0 {
			nodes[i].Random = nodes[randoms[i]]
		}
	}

	fmt.Println("Input:  [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]")
	clone := copyRandomList(nodes[0])

	list := []*Node{}
	for cur := clone; cur != nil; cur = cur.Next {
		list = append(list, cur)
	}

	res := "["
	for i, node := range list {
		index := -1
		for j, other := range list {
			if node.Random == other {
				index = j
			}
		}
		if i > 0 {
			res += ", "
		}
		if index < 0 {
			res += fmt.Sprintf("[%d, null]", node.Val)
		} else {
			res += fmt.Sprintf("[%d, %d]", node.Val, index)
		}
	}
	res += "]"
	fmt.Println("Output:", res)
}
