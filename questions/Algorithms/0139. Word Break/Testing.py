from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n = len(s)
        dp = [False] * (n + 1)
        dp[0] = True
        for i in range(1, n + 1):
            for w in wordDict:
                if i >= len(w) and dp[i - len(w)] and s[i - len(w):i] == w:
                    dp[i] = True
                    break
        return dp[n]

# ------------------------------- solution end ---------------------------------


def run(s, word_dict):
    print('Input:  s = "{}", wordDict = {}'.format(s, word_dict))
    print("Output: {}".format(Solution().wordBreak(s, word_dict)))


if __name__ == "__main__":
    run("leetcode", ["leet", "code"])
    run("applepenapple", ["apple", "pen"])
    run("catsandog", ["cats", "dog", "sand", "and", "cat"])
