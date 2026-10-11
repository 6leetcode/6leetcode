import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public List<Integer> spiralOrder(int[][] matrix) {
    List<Integer> order = new ArrayList<>();
    if (matrix.length == 0 || matrix[0].length == 0) {
      return order;
    }
    int rows = matrix.length, cols = matrix[0].length;
    int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
    while (left <= right && top <= bottom) {
      for (int c = left; c <= right; c++) {
        order.add(matrix[top][c]);
      }
      for (int r = top + 1; r <= bottom; r++) {
        order.add(matrix[r][right]);
      }
      if (left < right && top < bottom) {
        for (int c = right - 1; c > left; c--) {
          order.add(matrix[bottom][c]);
        }
        for (int r = bottom; r > top; r--) {
          order.add(matrix[r][left]);
        }
      }
      left++;
      right--;
      top++;
      bottom--;
    }
    return order;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] input = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    System.out.println("Input:  " + Arrays.deepToString(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.spiralOrder(input));
  }
}
