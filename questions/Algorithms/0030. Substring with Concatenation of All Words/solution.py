from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        res = []
        if not words or not s:
            return res
        w = len(words[0])
        total = w * len(words)
        for i in range(len(s) - total + 1):
            used = [False] * len(words)
            ok = True
            for j in range(len(words)):
                found = False
                for t in range(len(words)):
                    if not used[t] and s[i + j * w:i + (j + 1) * w] == words[t]:
                        used[t] = True
                        found = True
                        break
                if not found:
                    ok = False
                    break
            if ok:
                res.append(i)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("barfoothefoobarman"))
    print("Output: {}".format(Solution().findSubstring("barfoothefoobarman", ["foo", "bar"])))
