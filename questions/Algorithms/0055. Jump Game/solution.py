from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def canJump(self, nums: List[int]) -> bool:
        rightmost = 0
        for i in range(len(nums)):
            if i <= rightmost:
                rightmost = max(rightmost, i + nums[i])
                if rightmost >= len(nums) - 1:
                    return True
        return False

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [3, 2, 1, 0, 4]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().canJump(nums)))
