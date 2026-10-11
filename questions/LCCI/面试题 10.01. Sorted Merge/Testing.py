from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def merge(self, A: List[int], m: int, B: List[int], n: int) -> None:
        i, j, k = m - 1, n - 1, m + n - 1
        while j >= 0:
            if i >= 0 and A[i] > B[j]:
                A[k] = A[i]
                i -= 1
            else:
                A[k] = B[j]
                j -= 1
            k -= 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    A = [1, 2, 3, 0, 0, 0]
    B = [2, 5, 6]
    print("Input:  A = {}, m = 3; B = {}, n = 3".format(A, B))
    Solution().merge(A, 3, B, 3)
    print("Output: {}".format(A))
