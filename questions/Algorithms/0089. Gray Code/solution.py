from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def grayCode(self, n: int) -> List[int]:
        return [(i >> 1) ^ i for i in range(1 << n)]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(2))
    print("Output: {}".format(Solution().grayCode(2)))
