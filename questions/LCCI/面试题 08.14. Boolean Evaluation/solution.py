# ------------------------------- solution begin -------------------------------


class Solution:
    def countEval(self, s: str, result: int) -> int:
        memo = {}

        def solve(i: int, j: int, want: int) -> int:
            if i == j:
                return 1 if int(s[i]) == want else 0
            key = (i, j, want)
            if key in memo:
                return memo[key]
            total = 0
            for k in range(i + 1, j, 2):
                op = s[k]
                l0, l1 = solve(i, k - 1, 0), solve(i, k - 1, 1)
                r0, r1 = solve(k + 1, j, 0), solve(k + 1, j, 1)
                if op == "&":
                    t = l1 * r1
                    f = (l0 + l1) * (r0 + r1) - t
                elif op == "|":
                    f = l0 * r0
                    t = (l0 + l1) * (r0 + r1) - f
                else:
                    t = l0 * r1 + l1 * r0
                    f = l0 * r0 + l1 * r1
                total += t if want else f
            memo[key] = total
            return total

        return solve(0, len(s) - 1, result)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  s = 1^0|0|1, result = 0")
    print("Output: {}".format(Solution().countEval("1^0|0|1", 0)))
