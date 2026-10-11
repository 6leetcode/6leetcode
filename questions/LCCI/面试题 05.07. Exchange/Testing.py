# ------------------------------- solution begin -------------------------------


class Solution:
    def exchangeBits(self, num: int) -> int:
        return ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(2))
    print("Output: {}".format(Solution().exchangeBits(2)))
