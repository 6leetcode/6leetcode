import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int removeDuplicates(int[] nums) {
    if (nums.length == 0) {
      return 0;
    }
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
      if (nums[j] != nums[i]) {
        i++;
        nums[i] = nums[j];
      }
    }
    return i + 1;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    int k = new Solution().removeDuplicates(input);
    System.out.printf("Output: %d, %s\n", k, ArrayShowInteger(Arrays.copyOf(input, k)));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
