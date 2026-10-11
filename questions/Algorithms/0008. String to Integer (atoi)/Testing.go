package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func myAtoi(str string) int {
	i, n := 0, len(str)
	for i < n && str[i] == ' ' {
		i++
	}

	sign := 1
	if i < n && (str[i] == '+' || str[i] == '-') {
		if str[i] == '-' {
			sign = -1
		}
		i++
	}

	num := 0
	for i < n && str[i] >= '0' && str[i] <= '9' {
		d := int(str[i] - '0')
		if sign == 1 && (num > math.MaxInt32/10 || (num == math.MaxInt32/10 && d > 7)) {
			return math.MaxInt32
		}
		if sign == -1 && (num > math.MaxInt32/10 || (num == math.MaxInt32/10 && d > 8)) {
			return math.MinInt32
		}
		num = num*10 + d
		i++
	}

	return sign * num
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = " -42"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", myAtoi(input))
}
