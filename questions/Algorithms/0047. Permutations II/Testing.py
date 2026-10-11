from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res = []
        cur = []
        used = [False] * n

        def backtrack():
            if len(cur) == n:
                res.append(cur[:])
                return
            for i in range(n):
                if used[i]:
                    continue
                if i > 0 and nums[i] == nums[i - 1] and not used[i - 1]:
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
    nums = [1, 1, 2]
    print("Input:  {}".format(nums))
    print("Output: {}".format(Solution().permuteUnique(nums)))
