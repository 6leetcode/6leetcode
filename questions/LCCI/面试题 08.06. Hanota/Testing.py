from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def hanota(self, A: List[int], B: List[int], C: List[int]) -> None:
        def hanoi(src, aux, dst, n):
            if n == 0:
                return
            hanoi(src, dst, aux, n - 1)
            dst.append(src.pop())
            hanoi(aux, src, dst, n - 1)

        hanoi(A, B, C, len(A))

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    A, B, C = [2, 1, 0], [], []
    print("Input:  A = [2, 1, 0], B = [], C = []")
    Solution().hanota(A, B, C)
    print("Output: C = {}".format(C))
