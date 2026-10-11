// -------------------------------solution begin-------------------------------
class Solution {
  public void nextPermutation(int[] nums) {
    int i = nums.length - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
      i--;
    }
    if (i >= 0) {
      int j = nums.length - 1;
      while (nums[j] <= nums[i]) {
        j--;
      }
      int tmp = nums[i];
      nums[i] = nums[j];
      nums[j] = tmp;
    }
    for (int l = i + 1, r = nums.length - 1; l < r; l++, r--) {
      int tmp = nums[l];
      nums[l] = nums[r];
      nums[r] = tmp;
    }
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = { 1, 2, 3 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    new Solution().nextPermutation(input);
    System.out.println("Output: " + ArrayShowInteger(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
