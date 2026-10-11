import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] findSwapValues(int[] array1, int[] array2) {
    long sum1 = 0, sum2 = 0;
    for (int x : array1) sum1 += x;
    for (int x : array2) sum2 += x;
    long diff = sum2 - sum1;
    if (diff % 2 != 0) return new int[0];
    long target = diff / 2;
    for (int x : array1) {
      for (int y : array2) {
        if (y == x + target) return new int[] { x, y };
      }
    }
    return new int[0];
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] array1 = { 4, 1, 2, 1, 1, 2 };
    int[] array2 = { 3, 6, 3, 3 };
    System.out.printf("Input:  array1 = %s, array2 = %s\n", Arrays.toString(array1), Arrays.toString(array2));
    System.out.println("Output: " + Arrays.toString(new Solution().findSwapValues(array1, array2)));
  }
}
