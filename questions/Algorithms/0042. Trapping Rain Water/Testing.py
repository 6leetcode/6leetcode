from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def trap(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        lmax = rmax = res = 0
        while l < r:
            if height[l] < height[r]:
                if height[l] >= lmax:
                    lmax = height[l]
                else:
                    res += lmax - height[l]
                l += 1
            else:
                if height[r] >= rmax:
                    rmax = height[r]
                else:
                    res += rmax - height[r]
                r -= 1
        return res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
    print("Input:  {}".format(height))
    print("Output: {}".format(Solution().trap(height)))
