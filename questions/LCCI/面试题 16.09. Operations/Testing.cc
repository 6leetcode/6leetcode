#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Operations {
  int negate(int a) { return ~a + 1; }
  int absVal(int a) { return a < 0 ? negate(a) : a; }

public:
  Operations() {}
  int minus(int a, int b) { return a + negate(b); }
  int multiply(int a, int b) {
    int res = 0;
    int x = absVal(a), y = absVal(b);
    while (y > 0) {
      if (y & 1) res += x;
      x <<= 1;
      y >>= 1;
    }
    if ((a < 0) != (b < 0)) res = negate(res);
    return res;
  }
  int divide(int a, int b) {
    if (b == 0) return 0;
    long long x = absVal(a), y = absVal(b), q = 0;
    while (x >= y) {
      x -= y;
      q++;
    }
    int res = (int)q;
    if ((a < 0) != (b < 0)) res = negate(res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  minus(1, 2), multiply(3, 4), divide(5, -2)" << endl;
  Operations op;
  cout << "Output: [" << op.minus(1, 2) << ", " << op.multiply(3, 4) << ", " << op.divide(5, -2) << "]" << endl;
  return EXIT_SUCCESS;
}
