# ------------------------------- solution begin -------------------------------


class Solution:
    def calculate(self, s: str) -> int:
        result = prev = cur = 0
        op = "+"
        n = len(s)
        for i in range(n + 1):
            if i < n and s[i].isdigit():
                cur = cur * 10 + int(s[i])
            elif i == n or s[i] != " ":
                if op == "+":
                    result += prev
                    prev = cur
                elif op == "-":
                    result += prev
                    prev = -cur
                elif op == "*":
                    prev *= cur
                elif op == "/":
                    prev = int(prev / cur)
                if i < n:
                    op = s[i]
                cur = 0
        return result + prev

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print('Input:  "3+2*2"')
    print("Output: {}".format(Solution().calculate("3+2*2")))
