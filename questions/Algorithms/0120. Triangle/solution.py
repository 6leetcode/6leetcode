from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        dp = triangle[-1][:]
        for i in range(len(triangle) - 2, -1, -1):
            for j in range(i + 1):
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1])
        return dp[0]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    cases = [
        [[2], [3, 4], [6, 5, 7], [4, 1, 8, 3]],
        [[-10]],
    ]
    for triangle in cases:
        print("Input:  {}".format(triangle))
        print("Output: {}".format(Solution().minimumTotal(triangle)))
