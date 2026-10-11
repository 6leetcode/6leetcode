from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def kClosest(self, points: List[List[int]], K: int) -> List[List[int]]:
        points.sort(key=lambda p: p[0] * p[0] + p[1] * p[1])
        return points[:K]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    points = [[3, 3], [5, -1], [-2, 4]]
    print("Input:  {} {}".format(points, 2))
    print("Output: {}".format(Solution().kClosest(points, 2)))
