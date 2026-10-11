import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public boolean searchMatrix(int[][] matrix, int target) {
    if (matrix.length == 0) {
      return false;
    }
    int i = 0, j = matrix[0].length - 1;
    while (i < matrix.length && j >= 0) {
      if (matrix[i][j] == target) {
        return true;
      } else if (matrix[i][j] > target) {
        j--;
      } else {
        i++;
      }
    }
    return false;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] input1 = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 50 } };
    int input2 = 11;
    System.out.println("Input:  " + Arrays.deepToString(input1) + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.searchMatrix(input1, input2));
  }
}
