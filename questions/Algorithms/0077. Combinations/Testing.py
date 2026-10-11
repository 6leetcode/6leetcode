from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        res = []
        cur = []

        def dfs(start: int):
            if len(cur) == k:
                res.append(cur[:])
                return
            for i in range(start, n + 1):
                cur.append(i)
                dfs(i + 1)
                cur.pop()

        dfs(1)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format(4, 2))
    print("Output: {}".format(Solution().combine(4, 2)))
