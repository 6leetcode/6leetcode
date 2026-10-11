package main

import "fmt"

// ------------------------------- solution begin -------------------------------
func canCompleteCircuit(gas []int, cost []int) int {
	total, tank, start := 0, 0, 0

	for i := 0; i < len(gas); i++ {
		diff := gas[i] - cost[i]
		total += diff
		tank += diff
		if tank < 0 {
			start = i + 1
			tank = 0
		}
	}

	if total >= 0 {
		return start
	}
	return -1
}

// ------------------------------- solution end ---------------------------------

func main() {
	gas1 := []int{1, 2, 3, 4, 5}
	cost1 := []int{3, 4, 5, 1, 2}
	fmt.Printf("Input:  %v %v\n", gas1, cost1)
	fmt.Printf("Output: %d\n", canCompleteCircuit(gas1, cost1))

	gas2 := []int{2, 3, 4}
	cost2 := []int{3, 4, 3}
	fmt.Printf("Input:  %v %v\n", gas2, cost2)
	fmt.Printf("Output: %d\n", canCompleteCircuit(gas2, cost2))
}
