from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix or not matrix[0]:
            return []
        rows, cols = len(matrix), len(matrix[0])
        order = []
        left, right, top, bottom = 0, cols - 1, 0, rows - 1
        while left <= right and top <= bottom:
            for c in range(left, right + 1):
                order.append(matrix[top][c])
            for r in range(top + 1, bottom + 1):
                order.append(matrix[r][right])
            if left < right and top < bottom:
                for c in range(right - 1, left, -1):
                    order.append(matrix[bottom][c])
                for r in range(bottom, top, -1):
                    order.append(matrix[r][left])
            left += 1
            right -= 1
            top += 1
            bottom -= 1
        return order

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    print("Input:  {}".format(matrix))
    print("Output: {}".format(Solution().spiralOrder(matrix)))
