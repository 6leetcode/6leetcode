# ------------------------------- solution begin -------------------------------


class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        upper = sum(1 for c in word if c.isupper())
        lower = len(word) - upper
        return upper == len(word) or lower == len(word) or (upper == 1 and word[0].isupper())

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("Google"))
    print("Output: {}".format(Solution().detectCapitalUse("Google")))
