# ------------------------------- solution begin -------------------------------


class Solution:
    def reverseBits(self, num: int) -> int:
        best = prev = cur = 0
        for i in range(32):
            if (num >> i) & 1:
                cur += 1
            else:
                best = max(best, prev + cur + 1)
                prev, cur = cur, 0
        best = max(best, prev + cur + 1)
        return min(best, 32)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(1775))
    print("Output: {}".format(Solution().reverseBits(1775)))
