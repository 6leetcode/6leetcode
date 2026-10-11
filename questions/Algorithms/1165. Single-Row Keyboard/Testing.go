package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func calculateTime(keyboard string, word string) int {
	pos := make([]int, 26)
	for i := 0; i < 26; i++ {
		pos[keyboard[i]-'a'] = i
	}
	ans, cur := 0, 0
	for i := 0; i < len(word); i++ {
		next := pos[word[i]-'a']
		d := next - cur
		if d < 0 {
			d = -d
		}
		ans += d
		cur = next
	}
	return ans
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input1 = "abcdefghijklmnopqrstuvwxyz"
	var input2 = "cba"
	fmt.Printf("Input:  %s %s\n", input1, input2)
	fmt.Printf("Output: %d\n", calculateTime(input1, input2))
}
