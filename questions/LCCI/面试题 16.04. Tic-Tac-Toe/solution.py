from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def tictactoe(self, board: List[str]) -> str:
        n = len(board)

        def win(ch: str) -> bool:
            for i in range(n):
                if all(board[i][j] == ch for j in range(n)):
                    return True
                if all(board[j][i] == ch for j in range(n)):
                    return True
            if all(board[i][i] == ch for i in range(n)):
                return True
            if all(board[i][n - 1 - i] == ch for i in range(n)):
                return True
            return False

        if win("X"):
            return "X"
        if win("O"):
            return "O"
        for row in board:
            if " " in row:
                return "Pending"
        return "Draw"

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    board = ["O X", " XO", "X O"]
    print('Input:  ["O X", " XO", "X O"]')
    print("Output: {}".format(Solution().tictactoe(board)))
