package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findWhetherExistsPath(n int, graph [][]int, start int, target int) bool {
	adj := make([][]int, n+1)
	for _, e := range graph {
		adj[e[0]] = append(adj[e[0]], e[1])
	}
	visited := make([]bool, n+1)
	var dfs func(node int) bool
	dfs = func(node int) bool {
		if node == target {
			return true
		}
		if visited[node] {
			return false
		}
		visited[node] = true
		for _, next := range adj[node] {
			if dfs(next) {
				return true
			}
		}
		return false
	}
	return dfs(start)
}

// ------------------------------- solution end ---------------------------------

func main() {
	graph := [][]int{{0, 1}, {0, 2}, {1, 2}, {1, 2}}
	fmt.Println("Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2")
	fmt.Printf("Output: %t\n", findWhetherExistsPath(3, graph, 0, 2))
}
