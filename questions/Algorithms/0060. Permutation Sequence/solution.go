package main

import (
	"fmt"
	"strconv"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func getPermutation(n int, k int) string {
	fact := make([]int, n+1)
	fact[0] = 1
	for i := 1; i <= n; i++ {
		fact[i] = fact[i-1] * i
	}
	nums := make([]string, n)
	for i := 0; i < n; i++ {
		nums[i] = strconv.Itoa(i + 1)
	}
	var sb strings.Builder
	k--
	for i := n; i >= 1; i-- {
		idx := k / fact[i-1]
		sb.WriteString(nums[idx])
		nums = append(nums[:idx], nums[idx+1:]...)
		k %= fact[i-1]
	}
	return sb.String()
}

// ------------------------------- solution end ---------------------------------

func main() {
	var n, k = 3, 3
	fmt.Printf("Input:  %d %d\n", n, k)
	fmt.Printf("Output: %s\n", getPermutation(n, k))
}
