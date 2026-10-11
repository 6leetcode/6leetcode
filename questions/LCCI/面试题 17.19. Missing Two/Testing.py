import math
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def missingTwo(self, nums: List[int]) -> List[int]:
        n = len(nums) + 2
        sum_all = n * (n + 1) // 2
        sq_all = n * (n + 1) * (2 * n + 1) // 6
        s = sum(nums)
        sq = sum(x * x for x in nums)
        ds = sum_all - s
        dq = sq_all - sq
        diff = int(math.isqrt(2 * dq - ds * ds))
        a = (ds + diff) // 2
        b = ds - a
        return [a, b]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [2, 3]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().missingTwo(nums)))
