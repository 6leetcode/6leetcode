from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums) // 2]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [-1, -1, 2147483647]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().majorityElement(nums)))
