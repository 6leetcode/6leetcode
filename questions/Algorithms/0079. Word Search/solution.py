from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        rows, cols = len(board), len(board[0])

        def dfs(i: int, j: int, idx: int) -> bool:
            if idx == len(word):
                return True
            if i < 0 or i >= rows or j < 0 or j >= cols or board[i][j] != word[idx]:
                return False
            tmp = board[i][j]
            board[i][j] = "#"
            found = (
                dfs(i + 1, j, idx + 1)
                or dfs(i - 1, j, idx + 1)
                or dfs(i, j + 1, idx + 1)
                or dfs(i, j - 1, idx + 1)
            )
            board[i][j] = tmp
            return found

        for i in range(rows):
            for j in range(cols):
                if dfs(i, j, 0):
                    return True
        return False

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    board = [["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]]
    print("Input:  {} {}".format(board, "ABCCED"))
    print("Output: {}".format(Solution().exist(board, "ABCCED")))
