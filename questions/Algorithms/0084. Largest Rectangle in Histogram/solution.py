from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        st = []
        max_area = 0
        for i in range(n + 1):
            h = heights[i] if i < n else 0
            while st and heights[st[-1]] > h:
                height = heights[st.pop()]
                width = i if not st else i - st[-1] - 1
                max_area = max(max_area, height * width)
            st.append(i)
        return max_area

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    heights = [2, 1, 5, 6, 2, 3]
    print("Input:  {}".format(heights))
    print("Output: {}".format(Solution().largestRectangleArea(heights)))
