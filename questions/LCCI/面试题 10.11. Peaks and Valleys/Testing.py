from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        nums.sort()
        for i in range(0, len(nums) - 1, 2):
            nums[i], nums[i + 1] = nums[i + 1], nums[i]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [5, 3, 1, 2, 3]
    print("Input:  {}".format(nums))
    Solution().wiggleSort(nums)
    print("Output: {}".format(nums))
