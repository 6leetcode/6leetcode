# ------------------------------- solution begin -------------------------------


class Solution:
    def oneEditAway(self, first: str, second: str) -> bool:
        m, n = len(first), len(second)
        if abs(m - n) > 1:
            return False
        if m > n:
            return self.oneEditAway(second, first)
        for i in range(m):
            if first[i] != second[i]:
                if m == n:
                    return first[i + 1:] == second[i + 1:]
                return first[i:] == second[i + 1:]
        return True

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("pale", "ple"))
    print("Output: {}".format(Solution().oneEditAway("pale", "ple")))
