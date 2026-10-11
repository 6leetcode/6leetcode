package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isScramble(s1 string, s2 string) bool {
	var check func(a, b string) bool
	check = func(a, b string) bool {
		if a == b {
			return true
		}
		if len(a) == 1 {
			return false
		}
		cnt := make([]int, 26)
		for i := 0; i < len(a); i++ {
			cnt[a[i]-'a']++
			cnt[b[i]-'a']--
		}
		for _, v := range cnt {
			if v != 0 {
				return false
			}
		}
		n := len(a)
		for i := 1; i < n; i++ {
			if (check(a[:i], b[:i]) && check(a[i:], b[i:])) ||
				(check(a[:i], b[n-i:]) && check(a[i:], b[:n-i])) {
				return true
			}
		}
		return false
	}
	return check(s1, s2)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var s1, s2 = "great", "rgeat"
	fmt.Printf("Input:  %s %s\n", s1, s2)
	fmt.Printf("Output: %t\n", isScramble(s1, s2))
}
