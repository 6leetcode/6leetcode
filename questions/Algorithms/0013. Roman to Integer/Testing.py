# ------------------------------- solution begin -------------------------------


class Solution:
    def romanToInt(self, s: str) -> int:
        value = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        result = 0
        for i in range(len(s)):
            curr = value[s[i]]
            if i + 1 < len(s) and curr < value[s[i + 1]]:
                result -= curr
            else:
                result += curr
        return result

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("MCMXCIV"))
    print("Output: {}".format(Solution().romanToInt("MCMXCIV")))
