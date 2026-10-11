from collections import Counter
from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def masterMind(self, solution: str, guess: str) -> List[int]:
        hits = 0
        s_count = Counter()
        g_count = Counter()
        for s, g in zip(solution, guess):
            if s == g:
                hits += 1
            else:
                s_count[s] += 1
                g_count[g] += 1
        pseudo = sum((s_count & g_count).values())
        return [hits, pseudo]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  solution = RGBY, guess = GGRR")
    print("Output: {}".format(Solution().masterMind("RGBY", "GGRR")))
