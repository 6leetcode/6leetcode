from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def permutation(self, S: str) -> List[str]:
        res = []
        used = [False] * len(S)
        cur = []

        def dfs():
            if len(cur) == len(S):
                res.append("".join(cur))
                return
            for i in range(len(S)):
                if used[i]:
                    continue
                used[i] = True
                cur.append(S[i])
                dfs()
                cur.pop()
                used[i] = False

        dfs()
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("qwe"))
    print("Output: {}".format(Solution().permutation("qwe")))
