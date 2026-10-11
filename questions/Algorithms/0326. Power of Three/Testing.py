# ------------------------------- solution begin -------------------------------


class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        return n > 0 and 1162261467 % n == 0

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(27))
    print("Output: {}".format(Solution().isPowerOfThree(27)))
