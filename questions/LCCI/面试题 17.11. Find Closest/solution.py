from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findClosest(self, words: List[str], word1: str, word2: str) -> int:
        best = len(words)
        p1 = p2 = -1
        for i, w in enumerate(words):
            if w == word1:
                p1 = i
                if p2 != -1:
                    best = min(best, i - p2)
            elif w == word2:
                p2 = i
                if p1 != -1:
                    best = min(best, i - p1)
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    words = ["I", "am", "a", "student", "from", "a", "university", "in", "a", "city"]
    print('Input:  words = [...], word1 = "a", word2 = "student"')
    print("Output: {}".format(Solution().findClosest(words, "a", "student")))
