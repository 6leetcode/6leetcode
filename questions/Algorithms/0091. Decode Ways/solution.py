# ------------------------------- solution begin -------------------------------


class Solution:
    def numDecodings(self, s: str) -> int:
        if not s or s[0] == "0":
            return 0
        pre, cur = 1, 1
        for i in range(1, len(s)):
            tmp = cur
            if s[i] == "0":
                if s[i - 1] in "12":
                    cur = pre
                else:
                    return 0
            elif s[i - 1] == "1" or (s[i - 1] == "2" and "1" <= s[i] <= "6"):
                cur = cur + pre
            pre = tmp
        return cur

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("226"))
    print("Output: {}".format(Solution().numDecodings("226")))
