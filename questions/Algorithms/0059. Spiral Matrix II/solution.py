from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        m = [[0] * n for _ in range(n)]
        top, bottom, left, right, num = 0, n - 1, 0, n - 1, 1
        while top <= bottom and left <= right:
            for c in range(left, right + 1):
                m[top][c] = num
                num += 1
            top += 1
            for r in range(top, bottom + 1):
                m[r][right] = num
                num += 1
            right -= 1
            if top <= bottom:
                for c in range(right, left - 1, -1):
                    m[bottom][c] = num
                    num += 1
                bottom -= 1
            if left <= right:
                for r in range(bottom, top - 1, -1):
                    m[r][left] = num
                    num += 1
                left += 1
        return m

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(3))
    print("Output: {}".format(Solution().generateMatrix(3)))
