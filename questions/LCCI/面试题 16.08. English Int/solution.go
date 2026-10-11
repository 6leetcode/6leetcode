package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
var ones = []string{"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"}
var tens = []string{"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"}
var thousands = []string{"", "Thousand", "Million", "Billion"}

func below1000(n int, out *[]string) {
	if n >= 100 {
		*out = append(*out, ones[n/100], "Hundred")
		n %= 100
	}
	if n >= 20 {
		*out = append(*out, tens[n/10])
		n %= 10
	}
	if n > 0 {
		*out = append(*out, ones[n])
	}
}

func numberToWords(num int) string {
	if num == 0 {
		return "Zero"
	}
	var out []string
	if num < 0 {
		out = append(out, "Negative")
		num = -num
	}
	var chunks []int
	for tmp := num; tmp > 0; tmp /= 1000 {
		chunks = append(chunks, tmp%1000)
	}
	for i := len(chunks) - 1; i >= 0; i-- {
		if chunks[i] == 0 {
			continue
		}
		below1000(chunks[i], &out)
		if thousands[i] != "" {
			out = append(out, thousands[i])
		}
	}
	return strings.Join(out, " ")
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 12345
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %q\n", numberToWords(input))
}
