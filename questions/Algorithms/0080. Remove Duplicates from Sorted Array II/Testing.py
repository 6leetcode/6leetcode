from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return len(nums)
        i = 2
        for j in range(2, len(nums)):
            if nums[j] != nums[i - 2]:
                nums[i] = nums[j]
                i += 1
        return i

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [1, 1, 1, 2, 2, 3]
    print("Input:  {}".format(nums))
    k = Solution().removeDuplicates(nums)
    print("Output: {}, {}".format(k, nums[:k]))
