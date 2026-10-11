# ------------------------------- solution begin -------------------------------


class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        cnt = 0  # num of bits 1
        while n > 0:
            if n & 1:
                cnt += 1
                if cnt > 1:
                    return False
            n >>= 1
        return cnt == 1

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  {}".format(16))
    print("Output: {}".format(Solution().isPowerOfTwo(16)))
