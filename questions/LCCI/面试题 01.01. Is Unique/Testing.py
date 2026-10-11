# ------------------------------- solution begin -------------------------------


class Solution:
    def isUnique(self, astr: str) -> bool:
        seen = set()
        for c in astr:
            if c in seen:
                return False
            seen.add(c)
        return True

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("leetcode"))
    print("Output: {}".format(Solution().isUnique("leetcode")))
