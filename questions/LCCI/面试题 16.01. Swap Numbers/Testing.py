from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def swapNumbers(self, numbers: List[int]) -> None:
        numbers[0] ^= numbers[1]
        numbers[1] ^= numbers[0]
        numbers[0] ^= numbers[1]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    numbers = [1, 2]
    print("Input:  {}".format(numbers))
    Solution().swapNumbers(numbers)
    print("Output: {}".format(numbers))
