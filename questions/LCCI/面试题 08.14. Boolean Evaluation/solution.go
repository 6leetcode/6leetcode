package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func countEval(s string, result int) int {
	memo := map[[3]int]int{}
	var solve func(i, j, want int) int
	solve = func(i, j, want int) int {
		if i == j {
			if int(s[i]-'0') == want {
				return 1
			}
			return 0
		}
		key := [3]int{i, j, want}
		if v, ok := memo[key]; ok {
			return v
		}
		total := 0
		for k := i + 1; k < j; k += 2 {
			op := s[k]
			l0, l1 := solve(i, k-1, 0), solve(i, k-1, 1)
			r0, r1 := solve(k+1, j, 0), solve(k+1, j, 1)
			var t, f int
			if op == '&' {
				t = l1 * r1
				f = (l0+l1)*(r0+r1) - t
			} else if op == '|' {
				f = l0 * r0
				t = (l0+l1)*(r0+r1) - f
			} else {
				t = l0*r1 + l1*r0
				f = l0*r0 + l1*r1
			}
			if want == 1 {
				total += t
			} else {
				total += f
			}
		}
		memo[key] = total
		return total
	}
	return solve(0, len(s)-1, result)
}

// ------------------------------- solution end ---------------------------------

func main() {
	var s = "1^0|0|1"
	var result = 0
	fmt.Printf("Input:  s = %s, result = %d\n", s, result)
	fmt.Printf("Output: %d\n", countEval(s, result))
}
