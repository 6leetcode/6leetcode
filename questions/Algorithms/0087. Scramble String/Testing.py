from collections import Counter

# ------------------------------- solution begin -------------------------------


class Solution:
    def isScramble(self, s1: str, s2: str) -> bool:
        def check(a: str, b: str) -> bool:
            if a == b:
                return True
            if len(a) == 1:
                return False
            if Counter(a) != Counter(b):
                return False
            n = len(a)
            for i in range(1, n):
                if (check(a[:i], b[:i]) and check(a[i:], b[i:])) or (
                    check(a[:i], b[n - i:]) and check(a[i:], b[:n - i])
                ):
                    return True
            return False

        return check(s1, s2)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("great", "rgeat"))
    print("Output: {}".format(Solution().isScramble("great", "rgeat")))
