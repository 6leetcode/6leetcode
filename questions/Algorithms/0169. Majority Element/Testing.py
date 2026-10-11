from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        candidate, count = nums[0], 1
        for i in range(1, len(nums)):
            if count == 0:
                candidate = nums[i]
                count = 1
            elif nums[i] == candidate:
                count += 1
            else:
                count -= 1
        return candidate

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [-1, -1, 2147483647]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().majorityElement(nums)))
