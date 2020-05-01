from typing import List


class Solution:
    def reverseString(self, s: List[str]) -> None:
        i = 0
        j = len(s)-1
        while i < j:
            temp = s[i]
            s[i] = s[j]
            s[j] = temp
            i = i + 1
            j = j - 1


if __name__ == "__main__":
    input1 = ["h", "e", "l", "l", "o"]
    solution = Solution()
    print("Input:  {}".format(input1))
    solution.reverseString(input1)
    print("Output: {}".format(input1))
