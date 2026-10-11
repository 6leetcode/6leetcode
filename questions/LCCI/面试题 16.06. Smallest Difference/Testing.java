import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int smallestDifference(int[] a, int[] b) {
    Arrays.sort(a);
    Arrays.sort(b);
    int i = 0, j = 0;
    long best = Long.MAX_VALUE;
    while (i < a.length && j < b.length) {
      best = Math.min(best, Math.abs((long) a[i] - b[j]));
      if (a[i] < b[j]) {
        i++;
      } else {
        j++;
      }
    }
    return (int) best;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] a = { 1, 3, 15, 11, 2 };
    int[] b = { 23, 127, 235, 19, 8 };
    System.out.printf("Input:  %s, %s\n", Arrays.toString(a), Arrays.toString(b));
    System.out.println("Output: " + new Solution().smallestDifference(a, b));
  }
}
