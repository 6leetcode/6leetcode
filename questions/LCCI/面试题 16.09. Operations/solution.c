#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int unused;
} Operations;

Operations *operationsCreate(void) {
  Operations *obj = (Operations *)malloc(sizeof(Operations));
  return obj;
}

static int negate(int a) { return ~a + 1; }

static int absVal(int a) { return a < 0 ? negate(a) : a; }

int operationsMinus(Operations *obj, int a, int b) {
  (void)obj;
  return a + negate(b);
}

int operationsMultiply(Operations *obj, int a, int b) {
  (void)obj;
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

int operationsDivide(Operations *obj, int a, int b) {
  (void)obj;
  if (b == 0) return 0;
  long long x = absVal(a), y = absVal(b);
  long long q = 0;
  while (x >= y) {
    x -= y;
    q++;
  }
  if ((a < 0) != (b < 0)) q = negate((int)q);
  return (int)q;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  minus(1, 2), multiply(3, 4), divide(5, -2)\n");
  Operations *op = operationsCreate();
  printf("Output: [%d, %d, %d]\n", operationsMinus(op, 1, 2), operationsMultiply(op, 3, 4), operationsDivide(op, 5, -2));
  free(op);
  return EXIT_SUCCESS;
}
