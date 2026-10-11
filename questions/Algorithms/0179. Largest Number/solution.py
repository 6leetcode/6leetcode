from functools import cmp_to_key
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        def cmp(a: int, b: int) -> int:
            if f"{a}{b}" > f"{b}{a}":
                return -1
            return 1

        nums = sorted(nums, key=cmp_to_key(cmp))
        if nums[0] == 0:
            return "0"
        return "".join(str(x) for x in nums)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [3, 30, 34, 5, 9]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().largestNumber(nums)))
