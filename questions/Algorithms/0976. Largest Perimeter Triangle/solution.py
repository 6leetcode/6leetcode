from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def largestPerimeter(self, A: List[int]) -> int:
        A.sort()
        for i in range(len(A) - 1, 1, -1):
            if A[i - 2] + A[i - 1] > A[i]:
                return A[i - 2] + A[i - 1] + A[i]
        return 0

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    A = [3, 6, 2, 3]
    print("Input:  {}".format(A))
    print("Output: {}".format(Solution().largestPerimeter(A)))
