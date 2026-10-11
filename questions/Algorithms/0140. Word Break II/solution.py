from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> List[str]:
        dict_set = set(wordDict)
        memo = {}

        def dfs(start):
            if start in memo:
                return memo[start]
            if start == len(s):
                return [""]
            res = []
            for end in range(start + 1, len(s) + 1):
                w = s[start:end]
                if w in dict_set:
                    for tail in dfs(end):
                        res.append(w if tail == "" else w + " " + tail)
            memo[start] = res
            return res

        return dfs(0)

# ------------------------------- solution end ---------------------------------


def run(s, word_dict):
    print('Input:  s = "{}", wordDict = {}'.format(s, word_dict))
    print("Output: {}".format(Solution().wordBreak(s, word_dict)))


if __name__ == "__main__":
    run("catsanddog", ["cat", "cats", "and", "sand", "dog"])
    run("pineapplepenapple", ["apple", "pen", "applepen", "pine", "pineapple"])
    run("catsandog", ["cats", "dog", "sand", "and", "cat"])
