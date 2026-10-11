from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findString(self, words: List[str], s: str) -> int:
        lo, hi = 0, len(words) - 1
        while lo <= hi:
            mid = (lo + hi) // 2
            m = mid
            while m < hi and words[m] == "":
                m += 1
            if words[m] == "":
                hi = mid - 1
                continue
            if words[m] == s:
                return m
            if words[m] < s:
                lo = m + 1
            else:
                hi = mid - 1
        return -1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    words = ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""]
    print('Input:  ["at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""], s = "ball"')
    print("Output: {}".format(Solution().findString(words, "ball")))
