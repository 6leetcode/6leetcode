# ------------------------------- solution begin -------------------------------


class Solution:
    def insertBits(self, N: int, M: int, i: int, j: int) -> int:
        mask = ((1 << (j - i + 1)) - 1) << i
        N &= ~mask
        N |= M << i
        return N & 0xFFFFFFFF

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  N = 10000000000, M = 10011, i = 2, j = 6")
    print("Output: {}".format(Solution().insertBits(1024, 19, 2, 6)))
