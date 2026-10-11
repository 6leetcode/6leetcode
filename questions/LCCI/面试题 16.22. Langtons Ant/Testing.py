from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def printKMoves(self, K: int) -> List[str]:
        dr = [0, 1, 0, -1]
        dc = [1, 0, -1, 0]
        d, r, c = 0, 0, 0
        black = set()
        visited = {(0, 0)}
        for _ in range(K):
            p = (r, c)
            if p not in black:
                black.add(p)
                d = (d + 1) % 4
            else:
                black.discard(p)
                d = (d + 3) % 4
            r += dr[d]
            c += dc[d]
            visited.add((r, c))
        min_r = min(p[0] for p in visited)
        max_r = max(p[0] for p in visited)
        min_c = min(p[1] for p in visited)
        max_c = max(p[1] for p in visited)
        letters = "RDLU"
        res = []
        for i in range(min_r, max_r + 1):
            row = []
            for j in range(min_c, max_c + 1):
                if (i, j) == (r, c):
                    row.append(letters[d])
                elif (i, j) in black:
                    row.append("X")
                else:
                    row.append("_")
            res.append("".join(row))
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(0))
    print("Output: {}".format(Solution().printKMoves(0)))
