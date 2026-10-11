# ------------------------------- solution begin -------------------------------


class Solution:
    def isNumber(self, s: str) -> bool:
        s = s.strip()
        i, n = 0, len(s)
        seen_digit = seen_dot = seen_exp = False
        if i < n and s[i] in "+-":
            i += 1
        while i < n:
            c = s[i]
            if c.isdigit():
                seen_digit = True
            elif c == ".":
                if seen_dot or seen_exp:
                    return False
                seen_dot = True
            elif c in "eE":
                if seen_exp or not seen_digit:
                    return False
                seen_exp = True
                seen_digit = False
                if i + 1 < n and s[i + 1] in "+-":
                    i += 1
            else:
                return False
            i += 1
        return seen_digit

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("2e10"))
    print("Output: {}".format(Solution().isNumber("2e10")))
