package main

import "fmt"

func backtrack(ans *[][]int, output *[]int, begin, length int) {
	if begin == length {
		var temp = make([]int, len(*output))
		copy(temp, *output)
		*ans = append(*ans, temp)
		return
	}
	var i = 0
	for i = begin; i < length; i++ {
		(*output)[begin], (*output)[i] = (*output)[i], (*output)[begin]
		backtrack(ans, output, begin+1, length)
		(*output)[i], (*output)[begin] = (*output)[begin], (*output)[i]
	}
}

func permute(nums []int) [][]int {
	if len(nums) == 0 {
		return [][]int{}
	}
	var ans [][]int
	backtrack(&ans, &nums, 0, len(nums))
	return ans
}

func main() {
	var input = []int{1, 2, 3}
	fmt.Printf("Input:  %v\n", input)
	var output = permute(input)
	fmt.Printf("Output: %v\n", output)
}
