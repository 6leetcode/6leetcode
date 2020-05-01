/*
# @Time : 2019-08-05 15:26
# @Author : smallForest
# @SoftWare : GoLand
*/
package main

import (
	"fmt"
	"math"
)

/**
* buckets 桶数
* 喝到毒水几分钟死去
* 多久的尝试时间
 */
func poorPigs(buckets int, minutesToDie int, minutesToTest int) int {
	times := minutesToTest / minutesToDie
	base := times + 1
	temp := math.Log(float64(buckets)) / math.Log(float64(base))
	ans := math.Ceil(temp)
	return int(ans)
}
func main() {
	a := poorPigs(25, 15, 60)
	fmt.Println(a)
}
