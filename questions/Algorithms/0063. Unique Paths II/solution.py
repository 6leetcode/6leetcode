from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m, n = len(obstacleGrid), len(obstacleGrid[0])
        dp = [0] * n
        dp[0] = 0 if obstacleGrid[0][0] else 1
        for j in range(1, n):
            dp[j] = dp[j - 1] if obstacleGrid[0][j] == 0 else 0
        for i in range(1, m):
            if obstacleGrid[i][0]:
                dp[0] = 0
            for j in range(1, n):
                dp[j] = 0 if obstacleGrid[i][j] else dp[j] + dp[j - 1]
        return dp[n - 1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    grid = [[0, 0, 0], [0, 1, 0], [0, 0, 0]]
    print("Input:  {}".format(grid))
    print("Output: {}".format(Solution().uniquePathsWithObstacles(grid)))
