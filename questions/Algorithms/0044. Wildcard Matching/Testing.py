# ------------------------------- solution begin -------------------------------


class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        s_idx = p_idx = 0
        match = 0
        star = -1
        while s_idx < len(s):
            if p_idx < len(p) and (p[p_idx] == "?" or p[p_idx] == s[s_idx]):
                s_idx += 1
                p_idx += 1
            elif p_idx < len(p) and p[p_idx] == "*":
                star = p_idx
                match = s_idx
                p_idx += 1
            elif star != -1:
                p_idx = star + 1
                match += 1
                s_idx = match
            else:
                return False
        while p_idx < len(p) and p[p_idx] == "*":
            p_idx += 1
        return p_idx == len(p)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("aa", "*"))
    print("Output: {}".format(Solution().isMatch("aa", "*")))
