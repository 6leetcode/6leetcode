from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        res = []
        cols = [-1] * n

        def is_safe(row: int, col: int) -> bool:
            for r in range(row):
                if cols[r] == col or abs(cols[r] - col) == abs(r - row):
                    return False
            return True

        def backtrack(row: int):
            if row == n:
                board = []
                for i in range(n):
                    line = ["."] * n
                    line[cols[i]] = "Q"
                    board.append("".join(line))
                res.append(board)
                return
            for col in range(n):
                if is_safe(row, col):
                    cols[row] = col
                    backtrack(row + 1)

        backtrack(0)
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(4))
    print("Output: {}".format(Solution().solveNQueens(4)))
