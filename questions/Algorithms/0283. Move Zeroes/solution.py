from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        left = 0
        for right in range(len(nums)):
            if nums[right] != 0:
                nums[left], nums[right] = nums[right], nums[left]
                left += 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [0, 1, 0, 3, 12]
    print("Input:  {}".format(nums))
    Solution().moveZeroes(nums)
    print("Output: {}".format(nums))
