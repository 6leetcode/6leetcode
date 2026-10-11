# ------------------------------- solution begin -------------------------------


class Solution:
    def canWin(self, s: str) -> bool:
        for i in range(1, len(s)):
            if s[i] == "+" and s[i - 1] == "+":
                if not self.canWin(s[:i - 1] + "--" + s[i + 1:]):
                    return True
        return False

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("++++"))
    print("Output: {}".format(Solution().canWin("++++")))
