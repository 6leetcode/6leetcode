from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def jump(self, nums: List[int]) -> int:
        jumps = cur_end = farthest = 0
        for i in range(len(nums) - 1):
            farthest = max(farthest, i + nums[i])
            if i == cur_end:
                jumps += 1
                cur_end = farthest
        return jumps

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [2, 3, 1, 1, 4]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().jump(nums)))
