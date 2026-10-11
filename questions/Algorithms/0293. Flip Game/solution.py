from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def generatePossibleNextMoves(self, s: str) -> List[str]:
        res = []
        for i in range(len(s) - 1):
            if s[i] == "+" and s[i + 1] == "+":
                res.append(s[:i] + "--" + s[i + 2:])
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("++++"))
    print("Output: {}".format(Solution().generatePossibleNextMoves("++++")))
