from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        for i in range(numRows):
            row = [1] * (i + 1)
            for j in range(1, i):
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j]
            ans.append(row)
        return ans

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(5))
    print("Output: {}".format(Solution().generate(5)))
