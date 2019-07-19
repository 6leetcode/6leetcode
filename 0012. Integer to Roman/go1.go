/*
# @Time : 2019-07-19 14:13
# @Author : smallForest
# @SoftWare : GoLand
*/
package main

import "fmt"

func main() {
	s := intToRoman(1994)
	fmt.Println(s)

}

func intToRoman(num int) string {
	// 定义两个数组
	luoma := []string{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}
	nums := []int{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}
	result := ""
	index := 0
	for num > 0 {
		for num >= nums[index] {
			num -= nums[index]
			result += luoma[index]
		}
		index++
	}
	return result
}
