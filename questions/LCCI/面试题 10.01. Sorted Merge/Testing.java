import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void merge(int[] A, int m, int[] B, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0) {
      if (i >= 0 && A[i] > B[j]) {
        A[k--] = A[i--];
      } else {
        A[k--] = B[j--];
      }
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] A = { 1, 2, 3, 0, 0, 0 };
    int[] B = { 2, 5, 6 };
    int m = 3, n = 3;
    System.out.printf("Input:  A = %s, m = %d; B = %s, n = %d\n", Arrays.toString(A), m, Arrays.toString(B), n);
    new Solution().merge(A, m, B, n);
    System.out.println("Output: " + Arrays.toString(A));
  }
}
