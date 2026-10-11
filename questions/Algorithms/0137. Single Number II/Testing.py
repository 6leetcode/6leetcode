from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ones, twos = 0, 0
        for num in nums:
            ones = ones ^ (num & ~twos)
            twos = twos ^ (num & ~ones)
        return ones

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [0, 1, 0, 1, 0, 1, 99]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().singleNumber(nums)))
