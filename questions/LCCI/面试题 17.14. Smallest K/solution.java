import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] smallestK(int[] arr, int k) {
    Arrays.sort(arr);
    return Arrays.copyOf(arr, k);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] arr = { 1, 3, 5, 7, 2, 4, 6, 8 };
    int k = 4;
    System.out.println("Input:  " + Arrays.toString(arr) + ", k = " + k);
    System.out.println("Output: " + Arrays.toString(new Solution().smallestK(arr, k)));
  }
}
