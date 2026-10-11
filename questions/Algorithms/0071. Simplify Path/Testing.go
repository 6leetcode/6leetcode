package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func simplifyPath(path string) string {
	parts := strings.Split(path, "/")
	var st []string
	for _, p := range parts {
		if p == "" || p == "." {
			continue
		}
		if p == ".." {
			if len(st) > 0 {
				st = st[:len(st)-1]
			}
		} else {
			st = append(st, p)
		}
	}
	return "/" + strings.Join(st, "/")
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "/a/./b/../../c/"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %s\n", simplifyPath(input))
}
