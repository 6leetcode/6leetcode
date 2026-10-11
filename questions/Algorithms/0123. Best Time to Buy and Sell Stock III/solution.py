from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy1, sell1 = -prices[0], 0
        buy2, sell2 = -prices[0], 0

        for price in prices:
            buy1 = max(buy1, -price)
            sell1 = max(sell1, buy1 + price)
            buy2 = max(buy2, sell1 - price)
            sell2 = max(sell2, buy2 + price)

        return sell2

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    test_cases = [[3, 3, 5, 0, 0, 3, 1, 4], [1, 2, 3, 4, 5], [7, 6, 4, 3, 1], [1]]
    for prices in test_cases:
        print("Input:  {}".format(prices))
        print("Output: {}".format(solution.maxProfit(prices)))
