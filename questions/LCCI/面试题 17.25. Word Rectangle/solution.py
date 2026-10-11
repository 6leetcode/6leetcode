from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxRectangle(self, words: List[str]) -> List[str]:
        by_len = {}
        for w in words:
            by_len.setdefault(len(w), []).append(w)

        best_area = 0
        best = []
        for w in by_len:
            for h in by_len:
                if w * h <= best_area:
                    continue
                rows = []
                col_words = by_len[h]
                col_set = set(col_words)

                def backtrack():
                    nonlocal best_area, best
                    if len(rows) == h:
                        for c in range(w):
                            col = "".join(r[c] for r in rows)
                            if col not in col_set:
                                return
                        best_area = w * h
                        best = rows[:]
                        return
                    for word in by_len[w]:
                        rows.append(word)
                        ok = True
                        for c in range(w):
                            prefix = "".join(r[c] for r in rows)
                            if not any(cw.startswith(prefix) for cw in col_words):
                                ok = False
                                break
                        if ok:
                            backtrack()
                        rows.pop()

                backtrack()
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    words = ["this", "real", "hard", "trh", "hea", "iar", "sld"]
    print('Input:  ["this", "real", "hard", "trh", "hea", "iar", "sld"]')
    print("Output: {}".format(Solution().maxRectangle(words)))
