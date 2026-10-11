import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int removeDuplicates(int[] nums) {
    if (nums.length <= 2) return nums.length;
    int i = 2;
    for (int j = 2; j < nums.length; j++) {
      if (nums[j] != nums[i - 2]) {
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
    int[] input = { 1, 1, 1, 2, 2, 3 };
    System.out.println("Input:  " + Arrays.toString(input));
    int k = new Solution().removeDuplicates(input);
    System.out.printf("Output: %d, %s\n", k, Arrays.toString(Arrays.copyOf(input, k)));
  }
}
