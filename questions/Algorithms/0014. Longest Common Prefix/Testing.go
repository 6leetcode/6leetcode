package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func longestCommonPrefix(strs []string) string {
	if len(strs) == 0 {
		return ""
	}
	prefix := strs[0]
	for _, s := range strs[1:] {
		for !strings.HasPrefix(s, prefix) {
			prefix = prefix[:len(prefix)-1]
			if prefix == "" {
				return ""
			}
		}
	}
	return prefix
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = []string{"flower", "flow", "flight"}
	fmt.Printf("Input:  %v\n", input)
	fmt.Printf("Output: %s\n", longestCommonPrefix(input))
}
