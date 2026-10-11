from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        used = [False] * len(nums)
        cur = []

        def backtrack():
            if len(cur) == len(nums):
                res.append(cur[:])
                return
            for i in range(len(nums)):
                if used[i]:
                    continue
                used[i] = True
                cur.append(nums[i])
                backtrack()
                cur.pop()
                used[i] = False

        backtrack()
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    nums = [1, 2, 3]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().permute(nums)))
