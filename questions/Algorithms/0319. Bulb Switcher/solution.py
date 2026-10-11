import math


class Solution:
    def bulbSwitch(self, n: int) -> int:
        return int(math.sqrt(n))


if __name__ == "__main__":
    solution = Solution()
    input1 = 16
    print("Input: ", input1)
    print("Output:", solution.bulbSwitch(input1))
