# ------------------------------- solution begin -------------------------------


class Solution:
    def getKthMagicNumber(self, k: int) -> int:
        dp = [1] * k
        i3 = i5 = i7 = 0
        for i in range(1, k):
            n3, n5, n7 = dp[i3] * 3, dp[i5] * 5, dp[i7] * 7
            m = min(n3, n5, n7)
            dp[i] = m
            if m == n3:
                i3 += 1
            if m == n5:
                i5 += 1
            if m == n7:
                i7 += 1
        return dp[k - 1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(5))
    print("Output: {}".format(Solution().getKthMagicNumber(5)))
