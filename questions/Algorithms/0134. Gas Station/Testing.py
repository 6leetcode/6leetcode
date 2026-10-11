from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        total = 0
        tank = 0
        start = 0

        for i in range(len(gas)):
            diff = gas[i] - cost[i]
            total += diff
            tank += diff
            if tank < 0:
                start = i + 1
                tank = 0

        return start if total >= 0 else -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    tests = [
        ([1, 2, 3, 4, 5], [3, 4, 5, 1, 2]),
        ([2, 3, 4], [3, 4, 3]),
    ]
    for gas, cost in tests:
        print("Input:  {} {}".format(gas, cost))
        print("Output: {}".format(solution.canCompleteCircuit(gas, cost)))
