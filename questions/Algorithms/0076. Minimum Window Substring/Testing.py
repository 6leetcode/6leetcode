# ------------------------------- solution begin -------------------------------


class Solution:
    def minWindow(self, s: str, t: str) -> str:
        from collections import Counter

        need = Counter(t)
        required = len(need)
        have = {}
        matched = 0
        left = 0
        start = 0
        min_len = float("inf")
        for right, c in enumerate(s):
            have[c] = have.get(c, 0) + 1
            if c in need and have[c] == need[c]:
                matched += 1
            while matched == required:
                if right - left + 1 < min_len:
                    min_len = right - left + 1
                    start = left
                lc = s[left]
                if lc in need and have[lc] == need[lc]:
                    matched -= 1
                have[lc] -= 1
                left += 1
        return "" if min_len == float("inf") else s[start:start + min_len]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("ADOBECODEBANC", "ABC"))
    print("Output: {}".format(Solution().minWindow("ADOBECODEBANC", "ABC")))
