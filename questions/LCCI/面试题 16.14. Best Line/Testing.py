from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def bestLine(self, points: List[List[int]]) -> List[int]:
        best_count, best_i, best_j = 2, 0, 1
        n = len(points)
        for i in range(n):
            for j in range(i + 1, n):
                dx = points[j][0] - points[i][0]
                dy = points[j][1] - points[i][1]
                count = 2
                for k in range(n):
                    if k == i or k == j:
                        continue
                    ddx = points[k][0] - points[i][0]
                    ddy = points[k][1] - points[i][1]
                    if dx * ddy == dy * ddx:
                        count += 1
                if count > best_count:
                    best_count, best_i, best_j = count, i, j
        return [best_i, best_j]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    points = [[0, 0], [1, 1], [1, 0], [2, 0]]
    print("Input:  [[0,0],[1,1],[1,0],[2,0]]")
    print("Output: {}".format(Solution().bestLine(points)))
