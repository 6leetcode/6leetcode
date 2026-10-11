# ------------------------------- solution begin -------------------------------


class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        n = pre = 0
        curr = 1
        for i in range(len(s) - 1):
            if s[i] == s[i + 1]:
                curr += 1
            else:
                pre = curr
                curr = 1
            if pre >= curr:
                n += 1
        return n

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("00110011"))
    print("Output: {}".format(Solution().countBinarySubstrings("00110011")))
