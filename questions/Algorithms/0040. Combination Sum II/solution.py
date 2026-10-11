from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        res = []
        cur = []

        def dfs(start: int, remain: int):
            if remain == 0:
                res.append(cur[:])
                return
            for i in range(start, len(candidates)):
                if candidates[i] > remain:
                    break
                if i > start and candidates[i] == candidates[i - 1]:
                    continue
                cur.append(candidates[i])
                dfs(i + 1, remain - candidates[i])
                cur.pop()

        dfs(0, target)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format([10, 1, 2, 7, 6, 1, 5], 8))
    print("Output: {}".format(Solution().combinationSum2([10, 1, 2, 7, 6, 1, 5], 8)))
