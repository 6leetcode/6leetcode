package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func romanToInt(s string) int {
	value := map[byte]int{'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
	result := 0
	for i := 0; i < len(s); i++ {
		curr := value[s[i]]
		if i+1 < len(s) && curr < value[s[i+1]] {
			result -= curr
		} else {
			result += curr
		}
	}
	return result
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "MCMXCIV"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %d\n", romanToInt(input))
}
