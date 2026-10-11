import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] getMaxMatrix(int[][] matrix) {
    int rows = matrix.length, cols = matrix[0].length;
    long best = Long.MIN_VALUE;
    int[] res = new int[4];
    for (int top = 0; top < rows; top++) {
      int[] colSum = new int[cols];
      for (int bottom = top; bottom < rows; bottom++) {
        for (int j = 0; j < cols; j++) colSum[j] += matrix[bottom][j];
        long cur = 0;
        int start = 0;
        for (int j = 0; j < cols; j++) {
          if (cur <= 0) {
            cur = colSum[j];
            start = j;
          } else {
            cur += colSum[j];
          }
          if (cur > best) {
            best = cur;
            res = new int[] { top, start, bottom, j };
          }
        }
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] matrix = { { -1, 0, 0 }, { 0, -1, 0 } };
    System.out.println("Input:  [[-1,0,0],[0,-1,0]]");
    System.out.println("Output: " + Arrays.toString(new Solution().getMaxMatrix(matrix)));
  }
}
