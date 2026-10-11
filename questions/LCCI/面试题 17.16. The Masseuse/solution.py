from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def massage(self, nums: List[int]) -> int:
        prev = cur = 0
        for x in nums:
            prev, cur = cur, max(cur, prev + x)
        return cur

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [1, 2, 3, 1]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().massage(nums)))
