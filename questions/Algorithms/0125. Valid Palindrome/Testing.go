package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func isPalindrome(s string) bool {
	isAlnum := func(c byte) bool {
		return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
	}
	toLower := func(c byte) byte {
		if c >= 'A' && c <= 'Z' {
			return c + ('a' - 'A')
		}
		return c
	}

	left, right := 0, len(s)-1
	for left < right {
		for left < right && !isAlnum(s[left]) {
			left++
		}
		for left < right && !isAlnum(s[right]) {
			right--
		}
		if toLower(s[left]) != toLower(s[right]) {
			return false
		}
		left++
		right--
	}

	return true
}

// ------------------------------- solution end ---------------------------------

func main() {
	inputs := []string{
		"A man, a plan, a canal: Panama",
		"race a car",
		" ",
		"0P",
	}
	for _, s := range inputs {
		fmt.Printf("Input:  %q\n", s)
		fmt.Printf("Output: %t\n", isPalindrome(s))
	}
}
