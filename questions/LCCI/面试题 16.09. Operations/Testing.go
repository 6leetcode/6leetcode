package main

import "fmt"

// ------------------------------- solution begin -------------------------------
type Operations struct{}

func Constructor() Operations {
	return Operations{}
}

func negate(a int) int {
	return ^a + 1
}

func absVal(a int) int {
	if a < 0 {
		return negate(a)
	}
	return a
}

func (o *Operations) Minus(a int, b int) int {
	return a + negate(b)
}

func (o *Operations) Multiply(a int, b int) int {
	res := 0
	x, y := absVal(a), absVal(b)
	for y > 0 {
		if y&1 == 1 {
			res += x
		}
		x <<= 1
		y >>= 1
	}
	if (a < 0) != (b < 0) {
		res = negate(res)
	}
	return res
}

func (o *Operations) Divide(a int, b int) int {
	if b == 0 {
		return 0
	}
	x, y, q := int64(absVal(a)), int64(absVal(b)), int64(0)
	for x >= y {
		x -= y
		q++
	}
	res := int(q)
	if (a < 0) != (b < 0) {
		res = negate(res)
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	fmt.Println("Input:  minus(1, 2), multiply(3, 4), divide(5, -2)")
	op := Constructor()
	fmt.Printf("Output: [%d, %d, %d]\n", op.Minus(1, 2), op.Multiply(3, 4), op.Divide(5, -2))
}
