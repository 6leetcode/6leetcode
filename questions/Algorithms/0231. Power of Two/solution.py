# ------------------------------- solution begin -------------------------------


class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n > 0 and n & (n - 1) == 0

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(16))
    print("Output: {}".format(Solution().isPowerOfTwo(16)))
