# ------------------------------- solution begin -------------------------------


class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend == -(2 ** 31) and divisor == -1:
            return 2 ** 31 - 1
        sign = -1 if (dividend > 0) ^ (divisor > 0) else 1
        a, b = abs(dividend), abs(divisor)
        res = 0
        while a >= b:
            temp, multiple = b, 1
            while a >= temp << 1:
                temp <<= 1
                multiple <<= 1
            a -= temp
            res += multiple
        return sign * res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format(10, 3))
    print("Output: {}".format(Solution().divide(10, 3)))
