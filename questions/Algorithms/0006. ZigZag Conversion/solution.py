# ------------------------------- solution begin -------------------------------


class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        n = len(s)
        cycle = 2 * numRows - 2
        ret = []
        for i in range(numRows):
            j = 0
            while i + j < n:
                ret.append(s[i + j])
                if i != 0 and i != numRows - 1 and j + cycle - i < n:
                    ret.append(s[j + cycle - i])
                j += cycle
        return "".join(ret)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    print("Input:  {} {}".format("PAYPALISHIRING", 3))
    print("Output: {}".format(solution.convert("PAYPALISHIRING", 3)))
