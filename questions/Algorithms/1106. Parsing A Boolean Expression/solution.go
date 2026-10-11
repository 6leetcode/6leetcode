package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func parseBoolExpr(expression string) bool {
	stack := []byte{}
	for i := 0; i < len(expression); i++ {
		c := expression[i]
		switch c {
		case 't', 'f', '(', '!', '&', '|':
			stack = append(stack, c)
		case ')':
			temp := []byte{}
			for stack[len(stack)-1] != '(' {
				temp = append(temp, stack[len(stack)-1])
				stack = stack[:len(stack)-1]
			}
			stack = stack[:len(stack)-1]
			op := stack[len(stack)-1]
			stack = stack[:len(stack)-1]
			var res byte
			if op == '!' {
				if temp[0] == 'f' {
					res = 't'
				} else {
					res = 'f'
				}
			} else if op == '&' {
				res = 't'
				for _, x := range temp {
					if x == 'f' {
						res = 'f'
						break
					}
				}
			} else {
				res = 'f'
				for _, x := range temp {
					if x == 't' {
						res = 't'
						break
					}
				}
			}
			stack = append(stack, res)
		}
	}
	return stack[0] == 't'
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "|(&(t,f,t),!(t))"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %t\n", parseBoolExpr(input))
}
