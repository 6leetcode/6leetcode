from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxArea(self, height: List[int]) -> int:
        left, right, best = 0, len(height) - 1, 0
        while left < right:
            h = min(height[left], height[right])
            best = max(best, (right - left) * h)
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    input1 = [1, 8, 6, 2, 5, 4, 8, 3, 7]
    print("Input:  {}".format(input1))
    print("Output: {}".format(Solution().maxArea(input1)))
