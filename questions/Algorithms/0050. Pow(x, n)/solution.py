# ------------------------------- solution begin -------------------------------


class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n < 0:
            x = 1 / x
            n = -n
        res = 1.0
        while n > 0:
            if n & 1:
                res *= x
            x *= x
            n >>= 1
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format(2.0, 10))
    print("Output: {}".format(Solution().myPow(2.0, 10)))
