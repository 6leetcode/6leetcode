# ------------------------------- solution begin -------------------------------


class Solution:
    def calculateTime(self, keyboard: str, word: str) -> int:
        pos = {c: i for i, c in enumerate(keyboard)}
        ans = cur = 0
        for c in word:
            nxt = pos[c]
            ans += abs(cur - nxt)
            cur = nxt
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("abcdefghijklmnopqrstuvwxyz", "cba"))
    print("Output: {}".format(Solution().calculateTime("abcdefghijklmnopqrstuvwxyz", "cba")))
