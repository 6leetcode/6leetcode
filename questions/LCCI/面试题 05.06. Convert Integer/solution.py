# ------------------------------- solution begin -------------------------------


class Solution:
    def convertInteger(self, A: int, B: int) -> int:
        return bin((A ^ B) & 0xFFFFFFFF).count("1")

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  A = 29, B = 15")
    print("Output: {}".format(Solution().convertInteger(29, 15)))
