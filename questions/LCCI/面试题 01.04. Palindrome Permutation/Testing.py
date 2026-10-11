from collections import Counter

# ------------------------------- solution begin -------------------------------


class Solution:
    def canPermutePalindrome(self, s: str) -> bool:
        return sum(v % 2 for v in Counter(s).values()) <= 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("tactcoa"))
    print("Output: {}".format(Solution().canPermutePalindrome("tactcoa")))
