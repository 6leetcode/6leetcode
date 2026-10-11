import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void rotate(int[][] matrix) {
    int n = matrix.length;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int t = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = t;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int l = 0, r = n - 1; l < r; l++, r--) {
        int t = matrix[i][l];
        matrix[i][l] = matrix[i][r];
        matrix[i][r] = t;
      }
    }
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] input = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    System.out.println("Input:  " + Arrays.deepToString(input));
    new Solution().rotate(input);
    System.out.println("Output: " + Arrays.deepToString(input));
  }
}
