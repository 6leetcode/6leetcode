# ------------------------------- solution begin -------------------------------


class Solution:
    def waysToStep(self, n: int) -> int:
        MOD = 1000000007
        if n == 1:
            return 1
        if n == 2:
            return 2
        if n == 3:
            return 4
        a, b, c = 1, 2, 4
        for _ in range(4, n + 1):
            a, b, c = b, c, (a + b + c) % MOD
        return c

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(5))
    print("Output: {}".format(Solution().waysToStep(5)))
