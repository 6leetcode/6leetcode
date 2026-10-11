package main

import (
	"fmt"
	"strconv"
)

// ------------------------------- solution begin -------------------------------
func evalRPN(tokens []string) int {
	stack := []int{}
	for _, t := range tokens {
		switch t {
		case "+", "-", "*", "/":
			b := stack[len(stack)-1]
			a := stack[len(stack)-2]
			stack = stack[:len(stack)-2]
			var r int
			switch t {
			case "+":
				r = a + b
			case "-":
				r = a - b
			case "*":
				r = a * b
			case "/":
				r = a / b
			}
			stack = append(stack, r)
		default:
			n, _ := strconv.Atoi(t)
			stack = append(stack, n)
		}
	}
	return stack[len(stack)-1]
}

// ------------------------------- solution end ---------------------------------

func run(tokens []string) {
	fmt.Printf("Input:  %q\n", tokens)
	fmt.Printf("Output: %d\n", evalRPN(tokens))
}

func main() {
	run([]string{"2", "1", "+", "3", "*"})
	run([]string{"4", "13", "5", "/", "+"})
	run([]string{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"})
}
