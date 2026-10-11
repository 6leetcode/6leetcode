package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func findRotateSteps(ring string, key string) int {
	n, m := len(ring), len(key)
	pos := make([][]int, 26)
	for i := 0; i < n; i++ {
		pos[ring[i]-'a'] = append(pos[ring[i]-'a'], i)
	}
	const inf = 1 << 30
	dp := make([][]int, m)
	for i := range dp {
		dp[i] = make([]int, n)
		for j := range dp[i] {
			dp[i][j] = inf
		}
	}
	for _, i := range pos[key[0]-'a'] {
		dp[0][i] = min(i, n-i) + 1
	}
	for i := 1; i < m; i++ {
		for _, j := range pos[key[i]-'a'] {
			for _, k := range pos[key[i-1]-'a'] {
				d := j - k
				if d < 0 {
					d = -d
				}
				if n-d < d {
					d = n - d
				}
				if dp[i-1][k]+d+1 < dp[i][j] {
					dp[i][j] = dp[i-1][k] + d + 1
				}
			}
		}
	}
	res := inf
	for _, v := range dp[m-1] {
		if v < res {
			res = v
		}
	}
	return res
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "godding"
	var input2 = "gd"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %d\n", findRotateSteps(input1, input2))
}
