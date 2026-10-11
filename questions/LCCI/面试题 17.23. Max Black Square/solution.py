from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxBlackSquare(self, matrix: List[List[int]]) -> int:
        n = len(matrix)
        dp = [[0] * n for _ in range(n)]
        best = 0
        for i in range(n):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 1:
                    if i == 0 or j == 0:
                        dp[i][j] = 1
                    else:
                        dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]) + 1
                    best = max(best, dp[i][j])
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    matrix = [[0, 1, 1, 1], [1, 1, 1, 1], [0, 1, 1, 1], [0, 1, 1, 1]]
    print("Input:  [[0,1,1,1],[1,1,1,1],[0,1,1,1],[0,1,1,1]]")
    print("Output: {}".format(Solution().maxBlackSquare(matrix)))
