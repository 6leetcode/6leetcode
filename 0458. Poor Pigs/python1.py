import math


class Solution:
    def poorPigs(self, buckets: int, minutesToDie: int, minutesToTest: int) -> int:
        base = minutesToTest / minutesToDie + 1
        return int(math.ceil(math.log10(buckets)/math.log10(base)))


if __name__ == "__main__":
    solution = Solution()
    buckets = 1000
    minutesToDie = 15
    minutesToTest = 1000
    print("Input:  {}, {}, {}".format(buckets, minutesToDie, minutesToTest))
    print("Output:  {}".format(solution.poorPigs(
        buckets, minutesToDie, minutesToTest)))
