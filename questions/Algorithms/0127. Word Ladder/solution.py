from collections import deque
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        word_set = set(wordList)
        if endWord not in word_set:
            return 0

        queue = deque([beginWord])
        level = 1

        while queue:
            for _ in range(len(queue)):
                word = queue.popleft()
                if word == endWord:
                    return level
                for i in range(len(word)):
                    for ch in "abcdefghijklmnopqrstuvwxyz":
                        nxt = word[:i] + ch + word[i + 1:]
                        if nxt in word_set:
                            word_set.remove(nxt)
                            queue.append(nxt)
            level += 1

        return 0

# ------------------------------- solution end ---------------------------------


def show_words(words):
    return "[" + ", ".join('"{}"'.format(w) for w in words) + "]"


if __name__ == "__main__":
    solution = Solution()

    cases = [
        ("hit", "cog", ["hot", "dot", "dog", "lot", "log", "cog"]),
        ("hit", "cog", ["hot", "dot", "dog", "lot", "log"]),
        ("hot", "dog", ["hot", "dog", "dot"]),
    ]
    for begin, end, words in cases:
        print('Input:  beginWord = "{}", endWord = "{}", wordList = {}'.format(begin, end, show_words(words)))
        print("Output: {}".format(solution.ladderLength(begin, end, list(words))))
