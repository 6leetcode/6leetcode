from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n):
            while 0 < nums[i] <= n and nums[nums[i] - 1] != nums[i]:
                j = nums[i] - 1
                nums[i], nums[j] = nums[j], nums[i]
        for i in range(n):
            if nums[i] != i + 1:
                return i + 1
        return n + 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [3, 4, -1, 1]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().firstMissingPositive(nums)))
