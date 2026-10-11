from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []

        def backtrack(cur: str, open_: int, close: int):
            if len(cur) == n * 2:
                res.append(cur)
                return
            if open_ < n:
                backtrack(cur + "(", open_ + 1, close)
            if close < open_:
                backtrack(cur + ")", open_, close + 1)

        backtrack("", 0, 0)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(3))
    print("Output: {}".format(Solution().generateParenthesis(3)))
