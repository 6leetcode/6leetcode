# ------------------------------- solution begin -------------------------------


class Solution:
    def compressString(self, S: str) -> str:
        res = []
        n = len(S)
        i = 0
        while i < n:
            j = i
            while j < n and S[j] == S[i]:
                j += 1
            res.append(S[i] + str(j - i))
            i = j
        out = "".join(res)
        return out if len(out) < len(S) else S

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("aabcccccaaa"))
    print("Output: {}".format(Solution().compressString("aabcccccaaa")))
