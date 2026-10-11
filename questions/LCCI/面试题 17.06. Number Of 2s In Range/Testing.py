# ------------------------------- solution begin -------------------------------


class Solution:
    def numberOf2sInRange(self, n: int) -> int:
        count = 0
        factor = 1
        while factor <= n:
            cur = (n // factor) % 10
            higher = n // (factor * 10)
            lower = n % factor
            if cur < 2:
                count += higher * factor
            elif cur == 2:
                count += higher * factor + lower + 1
            else:
                count += (higher + 1) * factor
            factor *= 10
        return count

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(25))
    print("Output: {}".format(Solution().numberOf2sInRange(25)))
