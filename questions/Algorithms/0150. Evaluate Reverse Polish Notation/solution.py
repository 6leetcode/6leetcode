from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:
            if t in ("+", "-", "*", "/"):
                b = stack.pop()
                a = stack.pop()
                if t == "+":
                    stack.append(a + b)
                elif t == "-":
                    stack.append(a - b)
                elif t == "*":
                    stack.append(a * b)
                else:
                    stack.append(int(a / b))
            else:
                stack.append(int(t))
        return stack[-1]

# ------------------------------- solution end ---------------------------------


def run(tokens):
    print("Input:  {}".format(tokens))
    print("Output: {}".format(Solution().evalRPN(list(tokens))))


if __name__ == "__main__":
    run(["2", "1", "+", "3", "*"])
    run(["4", "13", "5", "/", "+"])
    run(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"])
