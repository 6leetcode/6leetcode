from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def drawLine(self, length: int, w: int, x1: int, x2: int, y: int) -> List[int]:
        res = [0] * length
        per_row = w // 32
        for x in range(x1, x2 + 1):
            group = y * per_row + x // 32
            bit = 31 - (x % 32)
            res[group] |= 1 << bit
            if res[group] >= 2 ** 31:
                res[group] -= 2 ** 32
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0")
    print("Output: {}".format(Solution().drawLine(1, 32, 30, 31, 0)))
