# ------------------------------- solution begin -------------------------------


class Solution:
    def isFlipedString(self, s1: str, s2: str) -> bool:
        return len(s1) == len(s2) and s1 in (s2 + s2)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("waterbottle", "erbottlewat"))
    print("Output: {}".format(Solution().isFlipedString("waterbottle", "erbottlewat")))
