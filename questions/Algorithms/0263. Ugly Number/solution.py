# ------------------------------- solution begin -------------------------------


class Solution:
    def isUgly(self, num: int) -> bool:
        if num < 1:
            return False
        for f in (2, 3, 5):
            while num % f == 0:
                num //= f
        return num == 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(14))
    print("Output: {}".format(Solution().isUgly(14)))
