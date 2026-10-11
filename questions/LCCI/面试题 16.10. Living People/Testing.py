from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def maxAliveYear(self, birth: List[int], death: List[int]) -> int:
        delta = [0] * 102
        for b, d in zip(birth, death):
            delta[b - 1900] += 1
            delta[d - 1900 + 1] -= 1
        best = cur = 0
        best_year = 1900
        for i in range(101):
            cur += delta[i]
            if cur > best:
                best = cur
                best_year = 1900 + i
        return best_year

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    birth = [1900, 1901, 1950]
    death = [1948, 1951, 2000]
    print("Input:  birth = {}, death = {}".format(birth, death))
    print("Output: {}".format(Solution().maxAliveYear(birth, death)))
