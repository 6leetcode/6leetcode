from typing import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        length = len(digits)
        for i in reversed(range(length)):
            if digits[i] == 9:
                digits[i] = 0
            else:
                digits[i] += 1
                return digits
        if digits[0] == 0:
            ans = [1]
            ans.extend([0]*length)
            return ans
        return digits


if __name__ == '__main__':
    solution = Solution()
    digits = [1, 2, 3]
    print("Input: ", digits)
    print("Output:", solution.plusOne(digits))
