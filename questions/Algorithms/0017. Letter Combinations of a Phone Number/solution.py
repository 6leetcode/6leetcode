from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        mapping = ["abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
        res = [""]
        for d in digits:
            res = [prefix + c for prefix in res for c in mapping[int(d) - 2]]
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("23"))
    print("Output: {}".format(Solution().letterCombinations("23")))
