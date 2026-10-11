# ------------------------------- solution begin -------------------------------


class Solution:
    def waysToChange(self, n: int) -> int:
        MOD = 1000000007
        coins = [1, 5, 10, 25]
        dp = [0] * (n + 1)
        dp[0] = 1
        for coin in coins:
            for i in range(coin, n + 1):
                dp[i] = (dp[i] + dp[i - coin]) % MOD
        return dp[n]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(10))
    print("Output: {}".format(Solution().waysToChange(10)))
