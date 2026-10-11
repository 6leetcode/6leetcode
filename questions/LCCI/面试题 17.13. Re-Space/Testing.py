from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def respace(self, dictionary: List[str], sentence: str) -> int:
        n = len(sentence)
        dp = [0] * (n + 1)
        for i in range(1, n + 1):
            dp[i] = dp[i - 1] + 1
            for w in dictionary:
                wl = len(w)
                if i >= wl and sentence[i - wl:i] == w:
                    dp[i] = min(dp[i], dp[i - wl])
        return dp[n]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    dictionary = ["looked", "just", "like", "her", "brother"]
    sentence = "jesslookedjustliketimherbrother"
    print('Input:  dictionary = [looked, just, like, her, brother], sentence = "jesslookedjustliketimherbrother"')
    print("Output: {}".format(Solution().respace(dictionary, sentence)))
