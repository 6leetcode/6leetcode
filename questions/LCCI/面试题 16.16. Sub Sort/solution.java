import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] subSort(int[] array) {
    int m = -1, n = -1;
    int mx = array[0];
    for (int i = 1; i < array.length; i++) {
      if (array[i] < mx) {
        n = i;
      } else {
        mx = array[i];
      }
    }
    int mn = array[array.length - 1];
    for (int i = array.length - 2; i >= 0; i--) {
      if (array[i] > mn) {
        m = i;
      } else {
        mn = array[i];
      }
    }
    return new int[] { m, n };
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] array = { 1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19 };
    System.out.println("Input:  " + Arrays.toString(array));
    System.out.println("Output: " + Arrays.toString(new Solution().subSort(array)));
  }
}
