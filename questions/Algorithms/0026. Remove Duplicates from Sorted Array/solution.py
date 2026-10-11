from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        i = 0
        for j in range(1, len(nums)):
            if nums[j] != nums[i]:
                i += 1
                nums[i] = nums[j]
        return i + 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
    print("Input:  {}".format(nums))
    k = Solution().removeDuplicates(nums)
    print("Output: {}, {}".format(k, nums[:k]))
