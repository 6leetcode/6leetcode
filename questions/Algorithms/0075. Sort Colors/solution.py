from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def sortColors(self, nums: List[int]) -> None:
        ptr = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                nums[i], nums[ptr] = nums[ptr], nums[i]
                ptr += 1
        for i in range(ptr, len(nums)):
            if nums[i] == 1:
                nums[i], nums[ptr] = nums[ptr], nums[i]
                ptr += 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [2, 0, 2, 1, 1, 0]
    print("Input:  {}".format(nums))
    Solution().sortColors(nums)
    print("Output: {}".format(nums))
