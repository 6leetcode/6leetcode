from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        cur = []

        def backtrack(open_: int, close: int):
            if len(cur) == n * 2:
                res.append("".join(cur))
                return
            if open_ < n:
                cur.append("(")
                backtrack(open_ + 1, close)
                cur.pop()
            if close < open_:
                cur.append(")")
                backtrack(open_, close + 1)
                cur.pop()

        backtrack(0, 0)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(3))
    print("Output: {}".format(Solution().generateParenthesis(3)))
