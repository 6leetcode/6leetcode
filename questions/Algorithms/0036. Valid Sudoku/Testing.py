from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [[False] * 9 for _ in range(9)]
        cols = [[False] * 9 for _ in range(9)]
        boxes = [[False] * 9 for _ in range(9)]
        for i in range(9):
            for j in range(9):
                c = board[i][j]
                if c == ".":
                    continue
                d = ord(c) - ord("1")
                b = (i // 3) * 3 + j // 3
                if rows[i][d] or cols[j][d] or boxes[b][d]:
                    return False
                rows[i][d] = cols[j][d] = boxes[b][d] = True
        return True

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    board = [
        ["." , ".", "9", "7", "4", "8", ".", ".", "."],
        ["7", ".", ".", ".", ".", ".", ".", ".", "."],
        [".", "2", ".", "1", ".", "9", ".", ".", "."],
        [".", ".", "7", ".", ".", ".", "2", "4", "."],
        [".", "6", "4", ".", "1", ".", "5", "9", "."],
        [".", "9", "8", ".", ".", ".", "3", ".", "."],
        [".", ".", ".", "8", ".", "3", ".", "2", "."],
        [".", ".", ".", ".", ".", ".", ".", ".", "6"],
        [".", ".", ".", "2", "7", "5", "9", ".", "."],
    ]
    print("Input:  {}".format("".join("".join(row) for row in board)))
    print("Output: {}".format(Solution().isValidSudoku(board)))
