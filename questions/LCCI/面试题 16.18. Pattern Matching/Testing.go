package main

import (
	"fmt"
	"strings"
)

// ------------------------------- solution begin -------------------------------
func patternMatching(pattern string, value string) bool {
	n := len(value)
	if len(pattern) == 0 {
		return n == 0
	}
	na := strings.Count(pattern, "a")
	nb := len(pattern) - na
	check := func(la, lb int) bool {
		a, b := "", ""
		hasA, hasB := false, false
		pos := 0
		for i := 0; i < len(pattern); i++ {
			if pattern[i] == 'a' {
				if pos+la > n {
					return false
				}
				sub := value[pos : pos+la]
				if !hasA {
					a, hasA = sub, true
				} else if a != sub {
					return false
				}
				pos += la
			} else {
				if pos+lb > n {
					return false
				}
				sub := value[pos : pos+lb]
				if !hasB {
					b, hasB = sub, true
				} else if b != sub {
					return false
				}
				pos += lb
			}
		}
		if pos != n {
			return false
		}
		if hasA && hasB && a == b {
			return false
		}
		return true
	}
	for la := 0; la <= n; la++ {
		if na*la > n {
			break
		}
		rem := n - na*la
		if nb == 0 {
			if rem == 0 && check(la, 0) {
				return true
			}
		} else {
			if rem%nb != 0 {
				continue
			}
			if check(la, rem/nb) {
				return true
			}
		}
	}
	return false
}

// ------------------------------- solution end ---------------------------------

func main() {
	var pattern, value = "abba", "dogcatcatdog"
	fmt.Printf("Input:  pattern = %s, value = %s\n", pattern, value)
	fmt.Printf("Output: %t\n", patternMatching(pattern, value))
}
