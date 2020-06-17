package main

import "fmt"

func twoSum(nums []int, target int) []int {
	var res = make([]int, 2)
	res[0] = -1
	res[1] = -1

	var length = len(nums)

	if length < 2 {
		return res
	}

	var mp = make(map[int]int, len(nums))

	for i := 0; i < length; i++ {
		v, ok := mp[target-nums[i]]
		if ok {
			res[0] = v
			res[1] = i
			return res
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
	fmt.Println("Input: ", input1, input2)
	fmt.Println("Output:", output)
}
