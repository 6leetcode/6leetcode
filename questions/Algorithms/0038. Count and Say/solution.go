package main

import (
	"fmt"
	"strconv"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func countAndSay(n int) string {
	cur := "1"
	for k := 1; k < n; k++ {
		var sb strings.Builder
		for i := 0; i < len(cur); {
			j := i
			for j < len(cur) && cur[j] == cur[i] {
				j++
			}
			sb.WriteString(strconv.Itoa(j - i))
			sb.WriteByte(cur[i])
			i = j
		}
		cur = sb.String()
	}
	return cur
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 4
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %s\n", countAndSay(input))
}
