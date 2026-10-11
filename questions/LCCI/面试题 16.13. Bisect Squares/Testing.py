from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def cutSquares(self, square1: List[int], square2: List[int]) -> List[float]:
        c1x, c1y = square1[0] + square1[2] / 2, square1[1] + square1[2] / 2
        c2x, c2y = square2[0] + square2[2] / 2, square2[1] + square2[2] / 2
        if abs(c1x - c2x) < 1e-12:
            bottom = min(square1[1], square2[1])
            top = max(square1[1] + square1[2], square2[1] + square2[2])
            return [c1x, bottom, c1x, top]
        k = (c2y - c1y) / (c2x - c1x)
        b = c1y - k * c1x
        pts = []
        for x0, y0, side in (square1, square2):
            for x in (x0, x0 + side):
                y = k * x + b
                if y0 - 1e-6 <= y <= y0 + side + 1e-6:
                    pts.append((x, y))
            if abs(k) > 1e-12:
                for y in (y0, y0 + side):
                    x = (y - b) / k
                    if x0 - 1e-6 <= x <= x0 + side + 1e-6:
                        pts.append((x, y))
        pts.sort()
        return [pts[0][0], pts[0][1], pts[-1][0], pts[-1][1]]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  square1 = {-1, -1, 2}, square2 = {0, -1, 2}")
    print("Output: {}".format(Solution().cutSquares([-1, -1, 2], [0, -1, 2])))
