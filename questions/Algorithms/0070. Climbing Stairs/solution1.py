# ------------------------------- solution begin -------------------------------


class Solution:
    def climbStairs(self, n: int) -> int:
        prev, cur = 0, 1
        for _ in range(1, n + 1):
            prev, cur = cur, prev + cur
        return cur

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(10))
    print("Output: {}".format(Solution().climbStairs(10)))
