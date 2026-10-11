from collections import Counter

# ------------------------------- solution begin -------------------------------


class Solution:
    def CheckPermutation(self, s1: str, s2: str) -> bool:
        return Counter(s1) == Counter(s2)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("abc", "bca"))
    print("Output: {}".format(Solution().CheckPermutation("abc", "bca")))
