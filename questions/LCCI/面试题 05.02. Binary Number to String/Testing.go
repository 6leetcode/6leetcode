package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func printBin(num float64) string {
	res := "0."
	for num > 0 && len(res) < 32 {
		num *= 2
		if num >= 1 {
			res += "1"
			num -= 1
		} else {
			res += "0"
		}
	}
	if num > 0 {
		return "ERROR"
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 0.625
	fmt.Printf("Input:  %g\n", input)
	fmt.Printf("Output: %s\n", printBin(input))
}
