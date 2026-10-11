import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] missingTwo(int[] nums) {
    long n = nums.length + 2;
    long sumAll = n * (n + 1) / 2;
    long sqAll = n * (n + 1) * (2 * n + 1) / 6;
    long sum = 0, sq = 0;
    for (int x : nums) {
      sum += x;
      sq += (long) x * x;
    }
    long ds = sumAll - sum;
    long dq = sqAll - sq;
    long diff = (long) Math.sqrt(2 * dq - ds * ds);
    int a = (int) ((ds + diff) / 2);
    int b = (int) (ds - a);
    return new int[] { a, b };
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] nums = { 2, 3 };
    System.out.println("Input:  " + Arrays.toString(nums));
    System.out.println("Output: " + Arrays.toString(new Solution().missingTwo(nums)));
  }
}
