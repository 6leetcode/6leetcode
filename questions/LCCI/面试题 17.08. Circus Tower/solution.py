from bisect import bisect_left
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def bestSeqAtIndex(self, height: List[int], weight: List[int]) -> int:
        people = sorted(zip(height, weight), key=lambda p: (p[0], -p[1]))
        dp = []
        for _, w in people:
            idx = bisect_left(dp, w)
            if idx == len(dp):
                dp.append(w)
            else:
                dp[idx] = w
        return len(dp)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    height = [65, 70, 56, 75, 60, 68]
    weight = [100, 150, 90, 190, 95, 110]
    print("Input:  height = [65,70,56,75,60,68], weight = [100,150,90,190,95,110]")
    print("Output: {}".format(Solution().bestSeqAtIndex(height, weight)))
