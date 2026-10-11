# ------------------------------- solution begin -------------------------------


class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        n, m = len(haystack), len(needle)
        if m == 0:
            return 0
        for i in range(n - m + 1):
            if haystack[i:i + m] == needle:
                return i
        return -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    haystack, needle = "sadbutsad", "sad"
    print("Input:  {} {}".format(haystack, needle))
    print("Output: {}".format(Solution().strStr(haystack, needle)))
