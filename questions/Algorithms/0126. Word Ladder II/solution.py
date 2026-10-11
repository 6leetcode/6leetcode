from collections import defaultdict
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findLadders(self, beginWord: str, endWord: str, wordList: List[str]) -> List[List[str]]:
        word_set = set(wordList)
        res: List[List[str]] = []
        if endWord not in word_set:
            return res

        parents = defaultdict(list)
        visited = {beginWord}
        level = [beginWord]
        found = False

        while level and not found:
            next_set = set()
            next_level = []
            for word in level:
                for i in range(len(word)):
                    for ch in "abcdefghijklmnopqrstuvwxyz":
                        if ch == word[i]:
                            continue
                        cand = word[:i] + ch + word[i + 1:]
                        if cand in word_set and cand not in visited:
                            if cand not in next_set:
                                next_set.add(cand)
                                next_level.append(cand)
                            parents[cand].append(word)
                            if cand == endWord:
                                found = True
            visited |= next_set
            level = next_level

        if not found:
            return res

        def dfs(word: str, path: List[str]) -> None:
            if word == beginWord:
                res.append(path[::-1])
                return
            for p in parents[word]:
                dfs(p, path + [p])

        dfs(endWord, [endWord])
        return res

# ------------------------------- solution end ---------------------------------


def show_words(words):
    return "[" + ", ".join('"{}"'.format(w) for w in words) + "]"


def show_paths(paths):
    return "[" + ", ".join(show_words(p) for p in paths) + "]"


if __name__ == "__main__":
    solution = Solution()

    cases = [
        ("hit", "cog", ["hot", "dot", "dog", "lot", "log", "cog"]),
        ("hit", "cog", ["hot", "dot", "dog", "lot", "log"]),
    ]
    for begin, end, words in cases:
        print('Input:  beginWord = "{}", endWord = "{}", wordList = {}'.format(begin, end, show_words(words)))
        print("Output: {}".format(show_paths(solution.findLadders(begin, end, list(words)))))
