# ------------------------------- solution begin -------------------------------


class Solution:
    def parseBoolExpr(self, expression: str) -> bool:
        stack = []
        for c in expression:
            if c in "tf(!&|":
                stack.append(c)
            elif c == ")":
                has_true = has_false = False
                while stack[-1] != "(":
                    x = stack.pop()
                    if x == "t":
                        has_true = True
                    else:
                        has_false = True
                stack.pop()
                op = stack.pop()
                if op == "!":
                    stack.append("f" if has_true else "t")
                elif op == "&":
                    stack.append("f" if has_false else "t")
                else:
                    stack.append("t" if has_true else "f")
        return stack[0] == "t"

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format("|(&(t,f,t),!(t))"))
    print("Output: {}".format(Solution().parseBoolExpr("|(&(t,f,t),!(t))")))
