from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        i = len(nums) - 2
        while i >= 0 and nums[i] >= nums[i + 1]:
            i -= 1
        if i >= 0:
            j = len(nums) - 1
            while nums[j] <= nums[i]:
                j -= 1
            nums[i], nums[j] = nums[j], nums[i]
        l, r = i + 1, len(nums) - 1
        while l < r:
            nums[l], nums[r] = nums[r], nums[l]
            l, r = l + 1, r - 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [1, 2, 3]
    print("Input:  {}".format(nums))
    Solution().nextPermutation(nums)
    print("Output: {}".format(nums))
