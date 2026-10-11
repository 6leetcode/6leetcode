# ------------------------------- solution begin -------------------------------


class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i, j, carry = len(a) - 1, len(b) - 1, 0
        res = []
        while i >= 0 or j >= 0 or carry:
            total = carry
            if i >= 0:
                total += int(a[i])
                i -= 1
            if j >= 0:
                total += int(b[j])
                j -= 1
            res.append(str(total % 2))
            carry = total // 2
        return "".join(reversed(res))

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("1011", "111"))
    print("Output: {}".format(Solution().addBinary("1011", "111")))
