# ------------------------------- solution begin -------------------------------


class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        a = b = c = l = ans = 0
        for r in range(len(s)):
            if s[r] == "a":
                a += 1
            if s[r] == "b":
                b += 1
            if s[r] == "c":
                c += 1
            while a > 1 or b > 1 or c > 1:
                if s[l] == "a" and a > 1:
                    a -= 1
                    l += 1
                elif s[l] == "b" and b > 1:
                    b -= 1
                    l += 1
                elif s[l] == "c" and c > 1:
                    c -= 1
                    l += 1
                else:
                    break
            if a and b and c:
                ans += l + 1
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("abcabc"))
    print("Output: {}".format(Solution().numberOfSubstrings("abcabc")))
