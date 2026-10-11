import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int removeElement(int[] nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.length; j++) {
      if (nums[j] != val) {
        nums[i] = nums[j];
        i++;
      }
    }
    return i;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input1 = { 3, 2, 2, 3 };
    int input2 = 3;
    System.out.printf("Input:  %s %d\n", ArrayShowInteger(input1), input2);
    int k = new Solution().removeElement(input1, input2);
    System.out.printf("Output: %d, %s\n", k, ArrayShowInteger(Arrays.copyOf(input1, k)));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
