import java.util.HashMap;
import java.util.Map;

// ------------------------------- solution begin -------------------------------
class Solution {
  public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<Integer, Integer>();

    for (int i = 0; i < nums.length; ++i) {
      if (map.containsKey(target - nums[i])) {
        return new int[] {map.get(target - nums[i]), i};
      }
      map.put(nums[i], i);
    }
    return new int[] { -1, -1};
  }
}
// ------------------------------- solution end ---------------------------------

public class java1 {
  public static void main(String[] args) {
    Solution solution = new Solution();
    int[] input1 = new int[] {1, 2, 3};
    int target = 3;

    System.out.printf("Input:  [%d", input1[0]);
    for (int i = 1; i < input1.length; i++) {
      System.out.printf(", %d", input1[i]);
    }
    System.out.printf("] %d\n", target);

    int[] result = solution.twoSum(input1, target);

    System.out.printf("Output: [%d, %d]\n", result[0], result[1]);
  }
}
 