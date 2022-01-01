import java.util.HashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<Integer, Integer>();

    for (int i = 0; i < nums.length; ++i) {
      if (map.containsKey(target - nums[i])) {
        return new int[] { map.get(target - nums[i]), i };
      }
      map.put(nums[i], i);
    }
    return new int[] { -1, -1 };
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      if (i == 0) {
        res += Integer.toString(arr[i]);
      } else {
        res += ", " + Integer.toString(arr[i]);
      }
    }
    res += "]";
    return res;
  }

  public static void main(String[] args) {
    int[] input1 = new int[] { 1, 2, 3 };
    int input2 = 3;
    System.out.printf("Input:  %s, %d\n", ArrayShowInteger(input1), input2);

    Solution solution = new Solution();
    System.out.printf("Output: %s\n", ArrayShowInteger(solution.twoSum(input1, input2)));
  }
}
// -------------------------------solution end---------------------------------
