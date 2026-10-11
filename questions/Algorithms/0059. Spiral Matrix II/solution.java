import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[][] generateMatrix(int n) {
    int[][] m = new int[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1, num = 1;
    while (top <= bottom && left <= right) {
      for (int c = left; c <= right; c++) m[top][c] = num++;
      top++;
      for (int r = top; r <= bottom; r++) m[r][right] = num++;
      right--;
      if (top <= bottom) {
        for (int c = right; c >= left; c--) m[bottom][c] = num++;
        bottom--;
      }
      if (left <= right) {
        for (int r = bottom; r >= top; r--) m[r][left] = num++;
        left++;
      }
    }
    return m;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 3;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + Arrays.deepToString(solution.generateMatrix(input)));
  }
}
