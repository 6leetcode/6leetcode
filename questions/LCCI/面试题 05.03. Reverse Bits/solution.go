package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func reverseBits(num int) int {
	best, prev, cur := 0, 0, 0
	for i := 0; i < 32; i++ {
		if (num>>i)&1 == 1 {
			cur++
		} else {
			if prev+cur+1 > best {
				best = prev + cur + 1
			}
			prev = cur
			cur = 0
		}
	}
	if prev+cur+1 > best {
		best = prev + cur + 1
	}
	if best > 32 {
		best = 32
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func main() {
	var input = 1775
	fmt.Printf("Input:  %d\n", input)
	fmt.Printf("Output: %d\n", reverseBits(input))
}
