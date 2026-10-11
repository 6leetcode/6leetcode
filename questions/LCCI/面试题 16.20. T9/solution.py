from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def T9(self, num: str, words: List[str]) -> List[str]:
        mapping = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
        res = []
        for w in words:
            if len(w) != len(num):
                continue
            if all(w[j] in mapping[int(num[j])] for j in range(len(w))):
                res.append(w)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  num = "8733", words = ["tree", "used"]')
    print('Output: {}'.format(Solution().T9("8733", ["tree", "used"])))
