package main

import (
	"fmt"
	"strconv"
)

// ------------------------------- solution begin -------------------------------
func restoreIpAddresses(s string) []string {
	n := len(s)
	res := []string{}
	segments := make([]int, 4)
	var dfs func(segId, segStart int)
	dfs = func(segId, segStart int) {
		if segId == 4 {
			if segStart == n {
				res = append(res, strconv.Itoa(segments[0])+"."+strconv.Itoa(segments[1])+"."+strconv.Itoa(segments[2])+"."+strconv.Itoa(segments[3]))
			}
			return
		}
		if segStart == n {
			return
		}
		if s[segStart] == '0' {
			segments[segId] = 0
			dfs(segId+1, segStart+1)
		}
		addr := 0
		for segEnd := segStart; segEnd < n; segEnd++ {
			addr = addr*10 + int(s[segEnd]-'0')
			if addr > 0 && addr <= 255 {
				segments[segId] = addr
				dfs(segId+1, segEnd+1)
			} else {
				break
			}
		}
	}
	dfs(0, 0)
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "25525511135"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %v\n", restoreIpAddresses(input))
}
