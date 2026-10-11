from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def shortestSeq(self, big: List[int], small: List[int]) -> List[int]:
        need = set(small)
        best_len = len(big) + 1
        best = [-1, -1]
        for l in range(len(big)):
            if big[l] not in need:
                continue
            seen = set()
            r = l
            while r < len(big):
                if big[r] in need:
                    seen.add(big[r])
                    if len(seen) == len(need):
                        break
                r += 1
            if len(seen) == len(need) and r - l + 1 < best_len:
                best_len = r - l + 1
                best = [l, r]
        return best if best[0] != -1 else []

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    big = [7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7]
    small = [1, 5, 9]
    print("Input:  big = {}, small = {}".format(big, small))
    print("Output: {}".format(Solution().shortestSeq(big, small)))
