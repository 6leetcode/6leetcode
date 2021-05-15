package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isInterleave(s1 string, s2 string, s3 string) bool {
	n, m, t := len(s1), len(s2), len(s3)
	if (n + m) != t {
		return false
	}
	f := make([][]bool, n+1)
	for i := 0; i <= n; i++ {
		f[i] = make([]bool, m+1)
	}
	f[0][0] = true
	for i := 0; i <= n; i++ {
		for j := 0; j <= m; j++ {
			p := i + j - 1
			if i > 0 {
				f[i][j] = f[i][j] || (f[i-1][j] && s1[i-1] == s3[p])
			}
			if j > 0 {
				f[i][j] = f[i][j] || (f[i][j-1] && s2[j-1] == s3[p])
			}
		}
	}
	return f[n][m]
}
// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "aabcc"
	var input2 = "dbbca"
	var input3 = "aadbbbaccc"
	fmt.Printf("Input:  %s, %s, %s\n", input1, input2, input3)
	var output = "false"
	if isInterleave(input1, input2, input3) {
		output = "true"
	}
	fmt.Printf("Output: %s", output)
}
