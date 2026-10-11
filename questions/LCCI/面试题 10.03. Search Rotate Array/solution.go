package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func search(arr []int, target int) int {
	lo, hi, res := 0, len(arr)-1, -1
	for lo <= hi {
		mid := lo + (hi-lo)/2
		if arr[mid] == target {
			res = mid
			hi = mid - 1
		} else if arr[mid] > arr[lo] {
			if target >= arr[lo] && target < arr[mid] {
				hi = mid - 1
			} else {
				lo = mid + 1
			}
		} else if arr[mid] < arr[lo] {
			if target > arr[mid] && target <= arr[hi] {
				lo = mid + 1
			} else {
				hi = mid - 1
			}
		} else {
			if arr[lo] != target {
				lo++
			} else {
				res = mid
				hi = mid - 1
			}
		}
	}
	return res
}

// ------------------------------- solution end ---------------------------------

func main() {
	arr := []int{15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14}
	var target = 5
	fmt.Printf("Input:  %v, target = %d\n", arr, target)
	fmt.Printf("Output: %d\n", search(arr, target))
}
