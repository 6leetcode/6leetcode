# ------------------------------- solution begin -------------------------------


class Solution:
    def patternMatching(self, pattern: str, value: str) -> bool:
        n = len(value)
        if not pattern:
            return n == 0
        na = pattern.count("a")
        nb = len(pattern) - na

        def check(la: int, lb: int) -> bool:
            a = b = None
            pos = 0
            for c in pattern:
                if c == "a":
                    if pos + la > n:
                        return False
                    sub = value[pos:pos + la]
                    if a is None:
                        a = sub
                    elif a != sub:
                        return False
                    pos += la
                else:
                    if pos + lb > n:
                        return False
                    sub = value[pos:pos + lb]
                    if b is None:
                        b = sub
                    elif b != sub:
                        return False
                    pos += lb
            if pos != n:
                return False
            if a is not None and b is not None and a == b:
                return False
            return True

        for la in range(n + 1):
            if na * la > n:
                break
            rem = n - na * la
            if nb == 0:
                if rem == 0 and check(la, 0):
                    return True
            else:
                if rem % nb != 0:
                    continue
                if check(la, rem // nb):
                    return True
        return False

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  pattern = abba, value = dogcatcatdog")
    print("Output: {}".format(Solution().patternMatching("abba", "dogcatcatdog")))
