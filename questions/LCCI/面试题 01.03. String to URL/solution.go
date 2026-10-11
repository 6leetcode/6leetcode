package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func replaceSpaces(S string, length int) string {
	var sb strings.Builder
	for i := 0; i < length; i++ {
		if S[i] == ' ' {
			sb.WriteString("%20")
		} else {
			sb.WriteByte(S[i])
		}
	}
	return sb.String()
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "Mr John Smith "
	var length = 13
	fmt.Printf("Input:  %q, %d\n", input, length)
	fmt.Printf("Output: %q\n", replaceSpaces(input, length))
}
