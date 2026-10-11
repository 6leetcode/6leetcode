# ------------------------------- solution begin -------------------------------


class Solution:
    def trailingZeroes(self, n: int) -> int:
        count = 0
        while n >= 5:
            n //= 5
            count += n
        return count

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(5))
    print("Output: {}".format(Solution().trailingZeroes(5)))
