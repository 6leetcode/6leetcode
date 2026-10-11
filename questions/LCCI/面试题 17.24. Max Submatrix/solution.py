from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def getMaxMatrix(self, matrix: List[List[int]]) -> List[int]:
        rows, cols = len(matrix), len(matrix[0])
        best = float("-inf")
        res = [0, 0, 0, 0]
        for top in range(rows):
            col_sum = [0] * cols
            for bottom in range(top, rows):
                for j in range(cols):
                    col_sum[j] += matrix[bottom][j]
                cur = 0
                start = 0
                for j in range(cols):
                    if cur <= 0:
                        cur = col_sum[j]
                        start = j
                    else:
                        cur += col_sum[j]
                    if cur > best:
                        best = cur
                        res = [top, start, bottom, j]
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    matrix = [[-1, 0, 0], [0, -1, 0]]
    print("Input:  [[-1,0,0],[0,-1,0]]")
    print("Output: {}".format(Solution().getMaxMatrix(matrix)))
