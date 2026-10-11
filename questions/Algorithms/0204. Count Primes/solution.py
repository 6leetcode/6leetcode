# ------------------------------- solution begin -------------------------------


class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 2:
            return 0
        is_prim = [True] * n
        for i in range(2, int(n ** 0.5) + 1):
            if is_prim[i]:
                for j in range(i * i, n, i):
                    is_prim[j] = False
        return sum(1 for i in range(2, n) if is_prim[i])

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(10))
    print("Output: {}".format(Solution().countPrimes(10)))
