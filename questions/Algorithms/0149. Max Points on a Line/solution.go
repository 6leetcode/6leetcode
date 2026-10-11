package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func gcd(a, b int) int {
	if a < 0 {
		a = -a
	}
	if b < 0 {
		b = -b
	}
	for b != 0 {
		a, b = b, a%b
	}
	return a
}

func maxPoints(points [][]int) int {
	n := len(points)
	if n < 3 {
		return n
	}

	best := 1
	for i := 0; i < n; i++ {
		cnt := make(map[[2]int]int)
		for j := i + 1; j < n; j++ {
			dy := points[j][1] - points[i][1]
			dx := points[j][0] - points[i][0]
			g := gcd(dy, dx)
			if g == 0 {
				g = 1
			}
			dy /= g
			dx /= g
			if dx < 0 || (dx == 0 && dy < 0) {
				dy, dx = -dy, -dx
			}
			key := [2]int{dy, dx}
			cnt[key]++
			if cnt[key]+1 > best {
				best = cnt[key] + 1
			}
		}
	}
	return best
}

// ------------------------------- solution end ---------------------------------

func run(points [][]int) {
	fmt.Printf("Input:  %v\n", points)
	fmt.Printf("Output: %d\n", maxPoints(points))
}

func main() {
	run([][]int{{1, 1}, {2, 2}, {3, 3}})
	run([][]int{{1, 1}, {3, 2}, {5, 3}, {4, 1}, {2, 3}, {1, 4}})
}
