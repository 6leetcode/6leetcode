import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void wiggleSort(int[] nums) {
    Arrays.sort(nums);
    for (int i = 0; i + 1 < nums.length; i += 2) {
      int t = nums[i];
      nums[i] = nums[i + 1];
      nums[i + 1] = t;
    }
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 5, 3, 1, 2, 3 };
    System.out.println("Input:  " + Arrays.toString(input));
    new Solution().wiggleSort(input);
    System.out.println("Output: " + Arrays.toString(input));
  }
}
