from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        cur = []

        def dfs(start: int):
            res.append(cur[:])
            for i in range(start, len(nums)):
                if i > start and nums[i] == nums[i - 1]:
                    continue
                cur.append(nums[i])
                dfs(i + 1)
                cur.pop()

        dfs(0)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format([1, 2, 2]))
    print("Output: {}".format(Solution().subsetsWithDup([1, 2, 2])))
