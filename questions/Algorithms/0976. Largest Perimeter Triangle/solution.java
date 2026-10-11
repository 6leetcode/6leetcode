// -------------------------------solution begin-------------------------------
class Solution {
  public int largestPerimeter(int[] A) {
    java.util.Arrays.sort(A);
    for (int i = A.length - 1; i >= 2; i--) {
      if (A[i - 2] + A[i - 1] > A[i]) {
        return A[i - 2] + A[i - 1] + A[i];
      }
    }
    return 0;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 3, 6, 2, 3 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.largestPerimeter(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
