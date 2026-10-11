package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func missingTwo(nums []int) []int {
	n := int64(len(nums) + 2)
	sumAll := n * (n + 1) / 2
	sqAll := n * (n + 1) * (2*n + 1) / 6
	sum, sq := int64(0), int64(0)
	for _, x := range nums {
		sum += int64(x)
		sq += int64(x) * int64(x)
	}
	ds := sumAll - sum
	dq := sqAll - sq
	diff := int64(math.Sqrt(float64(2*dq - ds*ds)))
	a := int((ds + diff) / 2)
	b := int(ds) - a
	return []int{a, b}
}

// ------------------------------- solution end ---------------------------------

func main() {
	nums := []int{2, 3}
	fmt.Printf("Input:  %v\n", nums)
	fmt.Printf("Output: %v\n", missingTwo(nums))
}
