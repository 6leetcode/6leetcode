# ------------------------------- solution begin -------------------------------


class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        m = len(t)
        dp = [0] * (m + 1)
        dp[0] = 1
        for ch in s:
            for j in range(m, 0, -1):
                if ch == t[j - 1]:
                    dp[j] += dp[j - 1]
        return dp[m]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    cases = [("rabbbit", "rabbit"), ("babgbag", "bag"), ("ddd", "dd")]
    for s, t in cases:
        print('Input:  "{}", "{}"'.format(s, t))
        print("Output: {}".format(Solution().numDistinct(s, t)))
