package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func multiply(num1 string, num2 string) string {
	if num1 == "0" || num2 == "0" {
		return "0"
	}
	m, n := len(num1), len(num2)
	res := make([]int, m+n)
	for i := m - 1; i >= 0; i-- {
		for j := n - 1; j >= 0; j-- {
			mul := int(num1[i]-'0') * int(num2[j]-'0')
			p2 := i + j + 1
			sum := mul + res[p2]
			res[p2] = sum % 10
			res[i+j] += sum / 10
		}
	}
	var sb strings.Builder
	for _, d := range res {
		if sb.Len() == 0 && d == 0 {
			continue
		}
		sb.WriteByte(byte(d) + '0')
	}
	if sb.Len() == 0 {
		return "0"
	}
	return sb.String()
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "123"
	var input2 = "456"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %s\n", multiply(input1, input2))
}
