from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x: x[0])
        res = []
        for L, R in intervals:
            if not res or res[-1][1] < L:
                res.append([L, R])
            elif R > res[-1][1]:
                res[-1][1] = R
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    intervals = [[1, 4], [4, 5]]
    print("Input:  {}".format(intervals))
    print("Output: {}".format(Solution().merge(intervals)))
