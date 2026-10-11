from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def pathWithObstacles(self, obstacleGrid: List[List[int]]) -> List[List[int]]:
        rows, cols = len(obstacleGrid), len(obstacleGrid[0])
        visited = [[False] * cols for _ in range(rows)]
        path = []

        def dfs(r: int, c: int) -> bool:
            if r >= rows or c >= cols or obstacleGrid[r][c] == 1 or visited[r][c]:
                return False
            visited[r][c] = True
            if (r == rows - 1 and c == cols - 1) or dfs(r + 1, c) or dfs(r, c + 1):
                path.append([r, c])
                return True
            return False

        if not dfs(0, 0):
            return []
        path.reverse()
        return path

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    grid = [[0, 0, 0], [0, 1, 0], [0, 0, 0]]
    print("Input:  [[0,0,0],[0,1,0],[0,0,0]]")
    print("Output: {}".format(Solution().pathWithObstacles(grid)))
