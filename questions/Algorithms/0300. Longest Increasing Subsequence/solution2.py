from bisect import bisect_left
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        tails = []
        for num in nums:
            i = bisect_left(tails, num)
            if i == len(tails):
                tails.append(num)
            else:
                tails[i] = num
        return len(tails)

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
