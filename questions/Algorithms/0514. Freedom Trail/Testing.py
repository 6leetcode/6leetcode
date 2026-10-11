# ------------------------------- solution begin -------------------------------


class Solution:
    def findRotateSteps(self, ring: str, key: str) -> int:
        n, m = len(ring), len(key)
        pos = {}
        for i, c in enumerate(ring):
            pos.setdefault(c, []).append(i)

        inf = float("inf")
        dp = [[inf] * n for _ in range(m)]
        for i in pos[key[0]]:
            dp[0][i] = min(i, n - i) + 1
        for i in range(1, m):
            for j in pos[key[i]]:
                for k in pos[key[i - 1]]:
                    d = abs(j - k)
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + min(d, n - d) + 1)
        return min(dp[m - 1])

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("godding", "gd"))
    print("Output: {}".format(Solution().findRotateSteps("godding", "gd")))
