// -------------------------------solution begin-------------------------------
class Solution {
  public boolean searchMatrix(int[][] matrix, int target) {
    if (matrix.length == 0) return false;
    int i = 0, j = matrix[0].length - 1;
    while (i < matrix.length && j >= 0) {
      if (matrix[i][j] == target) return true;
      if (matrix[i][j] > target) {
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
    int[][] matrix = {
        { 1, 4, 7, 11, 15 },
        { 2, 5, 8, 12, 19 },
        { 3, 6, 9, 16, 22 },
        { 10, 13, 14, 17, 24 },
        { 18, 21, 23, 26, 30 },
    };
    int target = 5;
    System.out.println("Input:  matrix (sorted rows/cols), target = " + target);
    System.out.println("Output: " + new Solution().searchMatrix(matrix, target));
  }
}
