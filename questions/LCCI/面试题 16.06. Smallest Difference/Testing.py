from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def smallestDifference(self, a: List[int], b: List[int]) -> int:
        a.sort()
        b.sort()
        i = j = 0
        best = float("inf")
        while i < len(a) and j < len(b):
            best = min(best, abs(a[i] - b[j]))
            if a[i] < b[j]:
                i += 1
            else:
                j += 1
        return best

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    a = [1, 3, 15, 11, 2]
    b = [23, 127, 235, 19, 8]
    print("Input:  {}, {}".format(a, b))
    print("Output: {}".format(Solution().smallestDifference(a, b)))
