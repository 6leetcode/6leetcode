from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if not prices:
            return 0
        max_profit = 0
        min_price = prices[0]
        for p in prices[1:]:
            if p <= min_price:
                min_price = p
            else:
                max_profit = max(max_profit, p - min_price)
        return max_profit

# ------------------------------- solution end - --------------------------------


if __name__ == "__main__":
    solution = Solution()
    print("Input:  {}".format([7, 1, 5, 3, 6, 4]))
    print("Output: {}".format(solution.maxProfit([7, 1, 5, 3, 6, 4])))
