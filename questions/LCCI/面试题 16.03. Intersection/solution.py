from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def intersection(self, start1: List[int], end1: List[int], start2: List[int], end2: List[int]) -> List[float]:
        x1, y1 = start1
        x2, y2 = end1
        x3, y3 = start2
        x4, y4 = end2
        d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)
        if abs(d) > 1e-12:
            t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / d
            u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / d
            if -1e-9 <= t <= 1 + 1e-9 and -1e-9 <= u <= 1 + 1e-9:
                return [x1 + t * (x2 - x1), y1 + t * (y2 - y1)]
            return []

        def on_segment(p, a, b):
            cross = (b[0] - a[0]) * (p[1] - a[1]) - (b[1] - a[1]) * (p[0] - a[0])
            if abs(cross) > 1e-9:
                return False
            return min(a[0], b[0]) <= p[0] <= max(a[0], b[0]) and min(a[1], b[1]) <= p[1] <= max(a[1], b[1])

        candidates = []
        for p in (start1, end1):
            if on_segment(p, start2, end2):
                candidates.append(p)
        for p in (start2, end2):
            if on_segment(p, start1, end1):
                candidates.append(p)
        if not candidates:
            return []
        candidates.sort()
        return [float(candidates[0][0]), float(candidates[0][1])]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  line1 = {0, 0}, {1, 0}; line2 = {1, 1}, {0, -1}")
    print("Output: {}".format(Solution().intersection([0, 0], [1, 0], [1, 1], [0, -1])))
