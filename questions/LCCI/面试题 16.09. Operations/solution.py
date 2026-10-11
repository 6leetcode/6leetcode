# ------------------------------- solution begin -------------------------------


class Operations:
    def _negate(self, a: int) -> int:
        return ~a + 1

    def _abs(self, a: int) -> int:
        return self._negate(a) if a < 0 else a

    def minus(self, a: int, b: int) -> int:
        return a + self._negate(b)

    def multiply(self, a: int, b: int) -> int:
        res = 0
        x, y = self._abs(a), self._abs(b)
        while y > 0:
            if y & 1:
                res += x
            x <<= 1
            y >>= 1
        if (a < 0) != (b < 0):
            res = self._negate(res)
        return res

    def divide(self, a: int, b: int) -> int:
        if b == 0:
            return 0
        x, y, q = self._abs(a), self._abs(b), 0
        while x >= y:
            x -= y
            q += 1
        if (a < 0) != (b < 0):
            q = self._negate(q)
        return q

# ------------------------------- solution end ---------------------------------


if __name__ == "__main__":
    print("Input:  minus(1, 2), multiply(3, 4), divide(5, -2)")
    op = Operations()
    print("Output: [{}, {}, {}]".format(op.minus(1, 2), op.multiply(3, 4), op.divide(5, -2)))
