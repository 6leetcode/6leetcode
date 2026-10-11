# ------------------------------- solution begin -------------------------------


class Solution:
    def totalNQueens(self, n: int) -> int:
        count = 0
        cols = [-1] * n

        def is_safe(row: int, col: int) -> bool:
            for r in range(row):
                if cols[r] == col or abs(cols[r] - col) == abs(r - row):
                    return False
            return True

        def backtrack(row: int):
            nonlocal count
            if row == n:
                count += 1
                return
            for col in range(n):
                if is_safe(row, col):
                    cols[row] = col
                    backtrack(row + 1)

        backtrack(0)
        return count

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(4))
    print("Output: {}".format(Solution().totalNQueens(4)))
