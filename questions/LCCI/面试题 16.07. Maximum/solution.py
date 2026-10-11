# ------------------------------- solution begin -------------------------------


class Solution:
    def maximum(self, a: int, b: int) -> int:
        diff = a - b
        k = (diff >> 63) & 1
        return a * (1 - k) + b * k

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  a = 1, b = 2")
    print("Output: {}".format(Solution().maximum(1, 2)))
