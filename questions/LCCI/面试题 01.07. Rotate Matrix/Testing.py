from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        for i in range(n):
            for j in range(i + 1, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        for i in range(n):
            matrix[i].reverse()

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    print("Input:  {}".format(matrix))
    Solution().rotate(matrix)
    print("Output: {}".format(matrix))
