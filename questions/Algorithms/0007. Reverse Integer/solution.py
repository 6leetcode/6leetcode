# ------------------------------- solution begin -------------------------------


class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        n = abs(x)
        y = 0
        while n:
            y = y * 10 + n % 10
            n //= 10
        y *= sign
        if y < -2 ** 31 or y > 2 ** 31 - 1:
            return 0
        return y

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    print("Input:  {}".format(12345))
    print("Output: {}".format(solution.reverse(12345)))
