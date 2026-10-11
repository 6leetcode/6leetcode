from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        rows = [[False] * 9 for _ in range(9)]
        cols = [[False] * 9 for _ in range(9)]
        boxes = [[False] * 9 for _ in range(9)]
        empties = []
        for i in range(9):
            for j in range(9):
                c = board[i][j]
                if c == ".":
                    empties.append((i, j))
                else:
                    d = ord(c) - ord("1")
                    rows[i][d] = cols[j][d] = boxes[(i // 3) * 3 + j // 3][d] = True

        def solve(idx: int) -> bool:
            if idx == len(empties):
                return True
            i, j = empties[idx]
            b = (i // 3) * 3 + j // 3
            for d in range(9):
                if not rows[i][d] and not cols[j][d] and not boxes[b][d]:
                    board[i][j] = chr(ord("1") + d)
                    rows[i][d] = cols[j][d] = boxes[b][d] = True
                    if solve(idx + 1):
                        return True
                    rows[i][d] = cols[j][d] = boxes[b][d] = False
                    board[i][j] = "."
            return False

        solve(0)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    board = [
        list("..9748..."),
        list("7........"),
        list(".2.1.9..."),
        list("..7...24."),
        list(".64.1.59."),
        list(".98...3.."),
        list("...8.3.2."),
        list("........6"),
        list("...2759.."),
    ]
    print("Input:  {}".format("".join("".join(row) for row in board)))
    Solution().solveSudoku(board)
    print("Output: {}".format("".join("".join(row) for row in board)))
