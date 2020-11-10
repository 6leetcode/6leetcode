from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
  def canWinNim(self, n: int) -> bool:
    return n % 4 == 0

# ------------------------------- solution end - --------------------------------


if __name__ == '__main__':
  input = 4
  print("Input:  {}".format(input))
  solution = Solution()
  print("Output: {}".format(solution.canWinNim(input)))
