from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def permutation(self, S: str) -> List[str]:
        s = sorted(S)
        n = len(s)
        res = []
        used = [False] * n
        cur = []

        def dfs():
            if len(cur) == n:
                res.append("".join(cur))
                return
            for i in range(n):
                if used[i]:
                    continue
                if i > 0 and s[i] == s[i - 1] and not used[i - 1]:
                    continue
                used[i] = True
                cur.append(s[i])
                dfs()
                cur.pop()
                used[i] = False

        dfs()
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("qqe"))
    print("Output: {}".format(Solution().permutation("qqe")))
