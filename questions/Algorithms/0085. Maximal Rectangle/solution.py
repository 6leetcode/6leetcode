from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        if not matrix:
            return 0
        n = len(matrix[0])
        heights = [0] * n
        max_area = 0

        def largest(hs: List[int]) -> int:
            st = []
            best = 0
            for i in range(len(hs) + 1):
                h = hs[i] if i < len(hs) else 0
                while st and hs[st[-1]] > h:
                    height = hs[st.pop()]
                    width = i if not st else i - st[-1] - 1
                    best = max(best, height * width)
                st.append(i)
            return best

        for row in matrix:
            for j in range(n):
                heights[j] = heights[j] + 1 if row[j] == "1" else 0
            max_area = max(max_area, largest(heights))
        return max_area

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    matrix = [["1", "0", "1", "0", "0"], ["1", "0", "1", "1", "1"], ["1", "1", "1", "1", "1"], ["1", "0", "0", "1", "0"]]
    print("Input:  {}".format(matrix))
    print("Output: {}".format(Solution().maximalRectangle(matrix)))
