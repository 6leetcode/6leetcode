from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def longestWord(self, words: List[str]) -> str:
        word_set = set(words)
        words.sort(key=lambda w: (-len(w), w))

        def can_form(w: str) -> bool:
            n = len(w)
            dp = [False] * (n + 1)
            dp[0] = True
            for i in range(1, n + 1):
                for j in range(i):
                    if not dp[j]:
                        continue
                    if i == n and j == 0:
                        continue
                    if w[j:i] in word_set:
                        dp[i] = True
                        break
            return dp[n]

        for w in words:
            if can_form(w):
                return w
        return ""

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    words = ["cat", "banana", "dog", "nana", "walk", "walker", "dogwalker"]
    print('Input:  ["cat","banana","dog","nana","walk","walker","dogwalker"]')
    print('Output: "{}"'.format(Solution().longestWord(words)))
