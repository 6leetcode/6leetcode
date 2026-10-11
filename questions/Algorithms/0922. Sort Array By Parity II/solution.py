from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        n = len(A)
        ans = [0] * n
        i = 0
        for x in A:
            if x % 2 == 0:
                ans[i] = x
                i += 2
        i = 1
        for x in A:
            if x % 2 == 1:
                ans[i] = x
                i += 2
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    A = [4, 2, 5, 7]
    print("Input:  {}".format(A))
    print("Output: {}".format(Solution().sortArrayByParityII(A)))
