# ------------------------------- solution begin -------------------------------


class Solution:
    def minCut(self, s: str) -> int:
        n = len(s)
        if n <= 1:
            return 0

        pal = [[False] * n for _ in range(n)]
        for i in range(n - 1, -1, -1):
            for j in range(i, n):
                if s[i] == s[j] and (j - i < 2 or pal[i + 1][j - 1]):
                    pal[i][j] = True

        dp = [0] * n
        for i in range(n):
            if pal[0][i]:
                dp[i] = 0
                continue
            dp[i] = i
            for j in range(1, i + 1):
                if pal[j][i]:
                    dp[i] = min(dp[i], dp[j - 1] + 1)
        return dp[n - 1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    for s in ["aab", "a", "ab"]:
        print("Input:  {}".format(s))
        print("Output: {}".format(solution.minCut(s)))
