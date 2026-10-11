from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def pondSizes(self, land: List[List[int]]) -> List[int]:
        rows, cols = len(land), len(land[0])

        def dfs(r: int, c: int) -> int:
            if r < 0 or r >= rows or c < 0 or c >= cols or land[r][c] != 0:
                return 0
            land[r][c] = -1
            size = 1
            for dr in (-1, 0, 1):
                for dc in (-1, 0, 1):
                    if dr or dc:
                        size += dfs(r + dr, c + dc)
            return size

        res = []
        for i in range(rows):
            for j in range(cols):
                if land[i][j] == 0:
                    res.append(dfs(i, j))
        res.sort()
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    land = [[0, 2, 1, 0], [0, 1, 0, 1], [1, 1, 0, 1], [0, 1, 0, 1]]
    print("Input:  [[0,2,1,0],[0,1,0,1],[1,1,0,1],[0,1,0,1]]")
    print("Output: {}".format(Solution().pondSizes(land)))
