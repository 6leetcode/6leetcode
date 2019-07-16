/*
# @Time : 2019-07-16 23:56
# @Author : smallForest
# @SoftWare : GoLand
*/
package main

import (
	"fmt"
)

func convert(s string, numRows int) string {
	if numRows == 1 {
		return s
	}
	ret := ""
	n := len(s)
	cycleLen := 2*numRows - 2
	for i := 0; i < numRows; i++ {
		for j := 0; i+j < n; j += cycleLen {
			ret += s[j+i : j+i+1]
			if i != 0 && i != numRows-1 && j+cycleLen-i < n {
				ret += s[j+cycleLen-i : j+cycleLen-i+1]
			}
		}
	}

	return ret
}
func main() {
	s := convert("LEETCODEISHIRING", 4)
	fmt.Println(s)
}
