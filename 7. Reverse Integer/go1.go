package main

func reverse(x int) int {
	rev := 0
	for x != 0 {
		pop := x % 10 // pop=3
		x /= 10       // x=12
		if rev > 2147483647/10 || (rev == 2147483647/10 && pop > 7) {
			return 0
		}
		if rev < -2147483648/10 || (rev == -2147483648/10 && pop < -8) {
			return 0
		}

		rev = rev*10 + pop
	}
	return rev
}

//leetcode运行结果 4m 2.2MB
