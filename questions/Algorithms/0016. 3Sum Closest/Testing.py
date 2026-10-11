from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        ans = nums[0] + nums[1] + nums[-1]
        for i in range(len(nums) - 2):
            left, right = i + 1, len(nums) - 1
            while left < right:
                total = nums[i] + nums[left] + nums[right]
                if abs(target - ans) > abs(target - total):
                    ans = total
                if total < target:
                    left += 1
                else:
                    right -= 1
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    input1 = [-1, 2, 1, -4]
    input2 = 2
    print("Input:  {} {}".format(input1, input2))
    print("Output: {}".format(Solution().threeSumClosest(input1, input2)))
