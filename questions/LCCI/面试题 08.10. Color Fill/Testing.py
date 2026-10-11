from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        old_color = image[sr][sc]
        if old_color == newColor:
            return image
        rows, cols = len(image), len(image[0])

        def dfs(r: int, c: int):
            if r < 0 or r >= rows or c < 0 or c >= cols or image[r][c] != old_color:
                return
            image[r][c] = newColor
            dfs(r + 1, c)
            dfs(r - 1, c)
            dfs(r, c + 1)
            dfs(r, c - 1)

        dfs(sr, sc)
        return image

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    image = [[1, 1, 1], [1, 1, 0], [1, 0, 1]]
    print("Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2")
    print("Output: {}".format(Solution().floodFill(image, 1, 1, 2)))
