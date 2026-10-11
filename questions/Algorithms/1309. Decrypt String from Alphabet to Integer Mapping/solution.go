package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func freqAlphabets(s string) string {
	n := len(s)
	res := []byte{}
	for i := 0; i < n; i++ {
		if i+2 < n && s[i+2] == '#' {
			num := int(s[i]-'0')*10 + int(s[i+1]-'0')
			res = append(res, byte('a'+num-1))
			i += 2
		} else {
			res = append(res, byte('a'+int(s[i]-'0')-1))
		}
	}
	return string(res)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#"
	fmt.Printf("Input:  %s\n", input)
	fmt.Printf("Output: %s\n", freqAlphabets(input))
}
