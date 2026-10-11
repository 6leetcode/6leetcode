from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1]:
                profit += prices[i] - prices[i - 1]
        return profit

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    for prices in ([7, 1, 5, 3, 6, 4], [1, 2, 3, 4, 5], [7, 6, 4, 3, 1]):
        print("Input:  {}".format(prices))
        print("Output: {}".format(solution.maxProfit(prices)))
