from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def candy(self, ratings: List[int]) -> int:
        n = len(ratings)
        c = [1] * n

        for i in range(1, n):
            if ratings[i] > ratings[i - 1]:
                c[i] = c[i - 1] + 1
        for i in range(n - 2, -1, -1):
            if ratings[i] > ratings[i + 1] and c[i] <= c[i + 1]:
                c[i] = c[i + 1] + 1

        return sum(c)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    solution = Solution()
    for ratings in ([1, 0, 2], [1, 2, 2]):
        print("Input:  {}".format(ratings))
        print("Output: {}".format(solution.candy(ratings)))
