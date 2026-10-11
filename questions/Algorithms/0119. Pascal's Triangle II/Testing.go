package main

import (
	"fmt"

	"leetcode/library/go/helper"
)

// ------------------------------- solution begin -------------------------------
func getRow(rowIndex int) []int {
	row := make([]int, rowIndex+1)
	row[0] = 1
	for i := 1; i <= rowIndex; i++ {
		row[i] = 1
		for j := i - 1; j >= 1; j-- {
			row[j] += row[j-1]
		}
	}
	return row
}

// ------------------------------- solution end ---------------------------------

func main() {
	cases := []int{3, 0, 1, 4}
	for _, input := range cases {
		fmt.Printf("Input:  %d\n", input)
		fmt.Printf("Output: %s\n", helper.ArrayShow(getRow(input)))
	}
}
