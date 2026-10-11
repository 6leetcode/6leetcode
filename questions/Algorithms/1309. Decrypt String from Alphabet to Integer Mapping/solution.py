# ------------------------------- solution begin -------------------------------


class Solution:
    def freqAlphabets(self, s: str) -> str:
        res = []
        i = 0
        n = len(s)
        while i < n:
            if i + 2 < n and s[i + 2] == "#":
                res.append(chr(ord("a") + int(s[i:i + 2]) - 1))
                i += 3
            else:
                res.append(chr(ord("a") + int(s[i]) - 1))
                i += 1
        return "".join(res)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    s = "12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#"
    print("Input:  {}".format(s))
    print("Output: {}".format(Solution().freqAlphabets(s)))
