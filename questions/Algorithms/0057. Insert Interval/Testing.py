from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        res = []
        i = 0
        while i < len(intervals) and intervals[i][1] < newInterval[0]:
            res.append(intervals[i])
            i += 1
        lo, hi = newInterval
        while i < len(intervals) and intervals[i][0] <= hi:
            lo = min(lo, intervals[i][0])
            hi = max(hi, intervals[i][1])
            i += 1
        res.append([lo, hi])
        while i < len(intervals):
            res.append(intervals[i])
            i += 1
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format([[1, 3], [6, 9]], [2, 5]))
    print("Output: {}".format(Solution().insert([[1, 3], [6, 9]], [2, 5])))
