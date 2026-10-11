from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        res = len(nums)
        for i, x in enumerate(nums):
            res ^= i ^ x
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().missingNumber(nums)))
