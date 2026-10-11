import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int threeSumClosest(int[] nums, int target) {
    Arrays.sort(nums);
    int ans = nums[0] + nums[1] + nums[nums.length - 1];
    for (int i = 0; i < nums.length - 2; i++) {
      int left = i + 1, right = nums.length - 1;
      while (left < right) {
        int sum = nums[i] + nums[left] + nums[right];
        if (Math.abs(target - ans) > Math.abs(target - sum)) {
          ans = sum;
        }
        if (sum < target) {
          left++;
        } else {
          right--;
        }
      }
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input1 = new int[] { -1, 2, 1, -4 };
    int input2 = 2;
    System.out.println("Input:  " + ArrayShowInteger(input1) + " " + input2);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.threeSumClosest(input1, input2));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
