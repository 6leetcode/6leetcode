from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^= num
        return result

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [4, 1, 2, 1, 2]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().singleNumber(nums)))
