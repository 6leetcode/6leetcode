package main

import (
	"fmt"
	"math"
)

// ------------------------------- solution begin -------------------------------
func poorPigs(buckets int, minutesToDie int, minutesToTest int) int {
	times := minutesToTest / minutesToDie
	base := times + 1
	temp := math.Log(float64(buckets)) / math.Log(float64(base))
	ans := math.Ceil(temp)
	return int(ans)
}

// ------------------------------- solution end ---------------------------------
func main() {
	a := poorPigs(25, 15, 60)
	fmt.Println(a)
}
