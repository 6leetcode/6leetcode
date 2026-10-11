package main

import (
	"fmt"
	"strconv"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func compressString(S string) string {
	var sb strings.Builder
	n := len(S)
	for i := 0; i < n; {
		j := i
		for j < n && S[j] == S[i] {
			j++
		}
		sb.WriteByte(S[i])
		sb.WriteString(strconv.Itoa(j - i))
		i = j
	}
	res := sb.String()
	if len(res) < len(S) {
		return res
	}
	return S
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "aabcccccaaa"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %s\n", compressString(input))
}
