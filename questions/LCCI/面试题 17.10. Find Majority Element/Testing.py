from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        candidate, count = nums[0], 0
        for x in nums:
            if count == 0:
                candidate = x
            count += 1 if x == candidate else -1
        c = sum(1 for x in nums if x == candidate)
        return candidate if c > len(nums) // 2 else -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [1, 2, 5, 9, 5, 9, 5, 5, 5]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().majorityElement(nums)))
