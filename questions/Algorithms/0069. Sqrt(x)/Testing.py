# ------------------------------- solution begin -------------------------------


class Solution:
    def mySqrt(self, x: int) -> int:
        r = int(x ** 0.5)
        while (r + 1) * (r + 1) <= x:
            r += 1
        while r * r > x:
            r -= 1
        return r

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(8))
    print("Output: {}".format(Solution().mySqrt(8)))
