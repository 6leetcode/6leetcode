from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        if not nums:
            return 0
        dp = [1] * len(nums)
        max_len = 1
        for i in range(len(nums)):
            for j in range(i):
                if nums[i] > nums[j]:
                    dp[i] = max(dp[i], dp[j] + 1)
            max_len = max(max_len, dp[i])
        return max_len

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    inputs = [
        [10, 9, 2, 5, 3, 7, 101, 18],
        [0, 1, 0, 3, 2, 3],
        [7, 7, 7, 7, 7],
    ]
    solution = Solution()
    for nums in inputs:
        print("Input:  {}".format(nums))
        print("Output: {}".format(solution.lengthOfLIS(nums)))
