from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        row = [1] * (rowIndex + 1)
        for i in range(1, rowIndex + 1):
            for j in range(i - 1, 0, -1):
                row[j] = row[j] + row[j - 1]
        return row

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    for rowIndex in [3, 0, 1, 4]:
        print("Input:  {}".format(rowIndex))
        print("Output: {}".format(Solution().getRow(rowIndex)))
