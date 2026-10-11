# ------------------------------- solution begin -------------------------------


class Solution:
    def multiply(self, A: int, B: int) -> int:
        if A < B:
            return self.multiply(B, A)
        if B == 0:
            return 0
        if B == 1:
            return A
        if B & 1:
            return A + self.multiply(A, B - 1)
        return self.multiply(A << 1, B >> 1)

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  A = 3, B = 4")
    print("Output: {}".format(Solution().multiply(3, 4)))
