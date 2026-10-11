from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def solve(self, board: List[List[str]]) -> None:
        if not board:
            return
        rows, cols = len(board), len(board[0])

        def dfs(i: int, j: int) -> None:
            if i < 0 or i >= rows or j < 0 or j >= cols or board[i][j] != "O":
                return
            board[i][j] = "#"
            dfs(i + 1, j)
            dfs(i - 1, j)
            dfs(i, j + 1)
            dfs(i, j - 1)

        for i in range(rows):
            dfs(i, 0)
            dfs(i, cols - 1)
        for j in range(cols):
            dfs(0, j)
            dfs(rows - 1, j)

        for i in range(rows):
            for j in range(cols):
                if board[i][j] == "O":
                    board[i][j] = "X"
                elif board[i][j] == "#":
                    board[i][j] = "O"

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()

    t1 = [
        ["X", "X", "X", "X"],
        ["X", "O", "O", "X"],
        ["X", "X", "O", "X"],
        ["X", "O", "X", "X"],
    ]
    print("Input:  {}".format(t1))
    solution.solve(t1)
    print("Output: {}".format(t1))

    t2 = [["X"]]
    print("Input:  {}".format(t2))
    solution.solve(t2)
    print("Output: {}".format(t2))
