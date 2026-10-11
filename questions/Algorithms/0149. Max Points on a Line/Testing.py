import math
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        if n < 3:
            return n

        best = 1
        for i in range(n):
            cnt = {}
            for j in range(i + 1, n):
                dy = points[j][1] - points[i][1]
                dx = points[j][0] - points[i][0]
                g = math.gcd(dy, dx)
                if g == 0:
                    g = 1
                dy //= g
                dx //= g
                if dx < 0 or (dx == 0 and dy < 0):
                    dy, dx = -dy, -dx
                key = (dy, dx)
                cnt[key] = cnt.get(key, 0) + 1
                best = max(best, cnt[key] + 1)
        return best

# ------------------------------- solution end ---------------------------------


def run(points):
    print("Input:  {}".format(points))
    print("Output: {}".format(Solution().maxPoints(points)))


if __name__ == "__main__":
    run([[1, 1], [2, 2], [3, 3]])
    run([[1, 1], [3, 2], [5, 3], [4, 1], [2, 3], [1, 4]])
