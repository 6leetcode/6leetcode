# ------------------------------- solution begin -------------------------------


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        last = {}
        start = 0
        result = 0
        for i, ch in enumerate(s):
            if ch in last and last[ch] >= start:
                start = last[ch] + 1
            last[ch] = i
            result = max(result, i - start + 1)
        return result

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    print("Input:  {}".format("abcabcbb"))
    print("Output: {}".format(solution.lengthOfLongestSubstring("abcabcbb")))
