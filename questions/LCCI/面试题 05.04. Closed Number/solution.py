from typing import List

# ------------------------------- solution begin -------------------------------


class Solution:
    def findClosedNumbers(self, num: int) -> List[int]:
        def next_bigger(n: int) -> int:
            c, c0, c1 = n, 0, 0
            while c and not (c & 1):
                c0 += 1
                c >>= 1
            while c & 1:
                c1 += 1
                c >>= 1
            if c0 + c1 >= 31:
                return -1
            p = c0 + c1
            n |= 1 << p
            n &= ~((1 << p) - 1)
            n |= (1 << (c1 - 1)) - 1
            return n

        def next_smaller(n: int) -> int:
            c, c0, c1 = n, 0, 0
            while c & 1:
                c1 += 1
                c >>= 1
            if c == 0:
                return -1
            while c and not (c & 1):
                c0 += 1
                c >>= 1
            p = c0 + c1
            n &= ~((1 << (p + 1)) - 1)
            n |= ((1 << (c1 + 1)) - 1) << (c0 - 1)
            return n

        return [next_bigger(num), next_smaller(num)]

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(2))
    print("Output: {}".format(Solution().findClosedNumbers(2)))
