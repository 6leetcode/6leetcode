# ------------------------------- solution begin -------------------------------


class Solution:
    def printBin(self, num: float) -> str:
        res = "0."
        while num > 0 and len(res) < 32:
            num *= 2
            if num >= 1:
                res += "1"
                num -= 1
            else:
                res += "0"
        return "ERROR" if num > 0 else res

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(0.625))
    print("Output: {}".format(Solution().printBin(0.625)))
