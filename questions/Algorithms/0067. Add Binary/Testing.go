package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func addBinary(a string, b string) string {
	i, j := len(a)-1, len(b)-1
	carry := 0
	res := []byte{}
	for i >= 0 || j >= 0 || carry > 0 {
		sum := carry
		if i >= 0 {
			sum += int(a[i] - '0')
			i--
		}
		if j >= 0 {
			sum += int(b[j] - '0')
			j--
		}
		res = append(res, byte(sum%2)+'0')
		carry = sum / 2
	}
	for l, r := 0, len(res)-1; l < r; l, r = l+1, r-1 {
		res[l], res[r] = res[r], res[l]
	}
	return string(res)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "1011"
	var input2 = "111"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %s\n", addBinary(input1, input2))
}
