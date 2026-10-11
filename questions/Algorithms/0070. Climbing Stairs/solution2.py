import math

# ------------------------------- solution begin -------------------------------


class Solution:
    def climbStairs(self, n: int) -> int:
        # with this formal `$\frac{\frac{1+\sqrt{5}^{n}}{2}-\frac{1-\sqrt{5}^{n}}{2}}{\sqrt{5}}$`
        s = math.sqrt(5)
        return int(math.floor((((1 + s) / 2) ** (n + 1) + ((1 - s) / 2) ** (n + 1)) / s + 0.5))

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(10))
    print("Output: {}".format(Solution().climbStairs(10)))
