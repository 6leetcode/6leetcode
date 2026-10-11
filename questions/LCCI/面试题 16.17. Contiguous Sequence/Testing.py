from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        pre = 0
        max_ans = nums[0]
        for x in nums:
            pre = max(pre + x, x)
            max_ans = max(max_ans, pre)
        return max_ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().maxSubArray(nums)))
