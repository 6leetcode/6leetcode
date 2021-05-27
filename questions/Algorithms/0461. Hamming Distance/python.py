from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        return bin(x ^ y).count("1")


# ------------------------------- solution end - --------------------------------

if __name__ == "__main__":
    input1 = 1
    input2 = 4
    print("Input:  {}, {}".format(input1, input2))
    solution = Solution()
    print("Output: {}".format(solution.hammingDistance(input1, input2)))
