package main

import "fmt"

func twoSum(nums []int, target int) []int {
	res := make([]int, 0)
	mp := make(map[int]int)
	length := len(nums)
	if length < 2 {
		return res
	}
	for i := 0; i < length; i++ {
		v, ok := mp[target-nums[i]]
		if ok {
			res = append(res, v, i)
		} else {
			mp[nums[i]] = i
		}
	}
	return res
}

func main() {
	var input1 = []int{2, 7, 3}
	var input2 = 9
	var output = twoSum(input1, input2)
	fmt.Println("Input:", input1, input2)
	fmt.Println("Output:", output)
}
