package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func fullJustify(words []string, maxWidth int) []string {
	var res []string
	i, n := 0, len(words)
	for i < n {
		j, length := i, 0
		for j < n && length+len(words[j])+(j-i) <= maxWidth {
			length += len(words[j])
			j++
		}
		count := j - i
		var line strings.Builder
		if j == n || count == 1 {
			for k := i; k < j; k++ {
				if k > i {
					line.WriteByte(' ')
				}
				line.WriteString(words[k])
			}
			for line.Len() < maxWidth {
				line.WriteByte(' ')
			}
		} else {
			total := 0
			for k := i; k < j; k++ {
				total += len(words[k])
			}
			gaps := count - 1
			spaces := maxWidth - total
			base, extra := spaces/gaps, spaces%gaps
			for k := i; k < j; k++ {
				line.WriteString(words[k])
				if k != j-1 {
					sp := base
					if k-i < extra {
						sp++
					}
					line.WriteString(strings.Repeat(" ", sp))
				}
			}
		}
		res = append(res, line.String())
		i = j
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	input := []string{"This", "is", "an", "example", "of", "text", "justification."}
	maxWidth := 16
	fmt.Printf("Input:  %v %d\n", input, maxWidth)
	fmt.Printf("Output: %q\n", fullJustify(input, maxWidth))
}
