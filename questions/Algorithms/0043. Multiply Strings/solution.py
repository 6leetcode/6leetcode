# ------------------------------- solution begin -------------------------------


class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        m, n = len(num1), len(num2)
        res = [0] * (m + n)
        for i in range(m - 1, -1, -1):
            for j in range(n - 1, -1, -1):
                mul = int(num1[i]) * int(num2[j])
                p2 = i + j + 1
                total = mul + res[p2]
                res[p2] = total % 10
                res[i + j] += total // 10
        out = "".join(str(d) for d in res).lstrip("0")
        return out or "0"

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {} {}".format("123", "456"))
    print("Output: {}".format(Solution().multiply("123", "456")))
