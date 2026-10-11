package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func multiSearch(big string, smalls []string) [][]int {
	res := [][]int{}
	for _, s := range smalls {
		pos := []int{}
		if len(s) > 0 {
			for j := 0; j+len(s) <= len(big); j++ {
				if big[j:j+len(s)] == s {
					pos = append(pos, j)
				}
			}
		}
		res = append(res, pos)
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	big := "mississippi"
	smalls := []string{"is", "ppi", "hi", "sis", "i", "ssippi"}
	fmt.Println(`Input:  big = "mississippi", smalls = ["is","ppi","hi","sis","i","ssippi"]`)
	_ = strings.TrimSpace
	fmt.Printf("Output: %v\n", multiSearch(big, smalls))
}
