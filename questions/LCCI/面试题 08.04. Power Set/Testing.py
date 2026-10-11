from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        cur = []

        def dfs(start: int):
            res.append(cur[:])
            for i in range(start, len(nums)):
                cur.append(nums[i])
                dfs(i + 1)
                cur.pop()

        dfs(0)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format([1, 2, 3]))
    print("Output: {}".format(Solution().subsets([1, 2, 3])))
