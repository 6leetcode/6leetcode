package main

import (
	"fmt"
)

//双指针法
func maxArea(height []int) int {
	j := len(height) - 1 // right 指针
	i := 0               // left 指针
	min := 0
	max := 0

	for i < j { //tmp需要提前计算出来
		tmp := j - i
		if height[i] < height[j] {
			min = height[i]
			i++
		} else {
			min = height[j]
			j--
		}
		if tmp*min > max {
			max = tmp * min
		}
	}
	return max
}

func main() {
	var input = []int{1, 8, 6, 2, 5, 4, 8, 3, 7}
	var output = maxArea(input)
	fmt.Println("Input:", input)
	fmt.Println("Output:", output)
}
