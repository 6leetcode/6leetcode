# ------------------------------- solution begin -------------------------------


class Solution:
    def add(self, a: int, b: int) -> int:
        mask = 0xFFFFFFFF
        while b != 0:
            a, b = (a ^ b) & mask, ((a & b) << 1) & mask
        return a if a <= 0x7FFFFFFF else ~(a ^ mask)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format(-1, 2))
    print("Output: {}".format(Solution().add(-1, 2)))
