from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if not matrix:
            return False
        i, j = 0, len(matrix[0]) - 1
        while i < len(matrix) and j >= 0:
            if matrix[i][j] == target:
                return True
            elif matrix[i][j] > target:
                j -= 1
            else:
                i += 1
        return False

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 50]]
    print("Input:  {} {}".format(matrix, 11))
    print("Output: {}".format(Solution().searchMatrix(matrix, 11)))
