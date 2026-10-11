from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        cur = []

        def dfs(start: int, remain: int):
            if remain == 0:
                res.append(cur[:])
                return
            for i in range(start, len(candidates)):
                if candidates[i] > remain:
                    continue
                cur.append(candidates[i])
                dfs(i, remain - candidates[i])
                cur.pop()

        dfs(0, target)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format([2, 3, 6, 7], 7))
    print("Output: {}".format(Solution().combinationSum([2, 3, 6, 7], 7)))
