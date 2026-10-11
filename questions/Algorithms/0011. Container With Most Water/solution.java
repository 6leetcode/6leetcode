// -------------------------------solution begin-------------------------------
class Solution {
  public int maxArea(int[] height) {
    int left = 0, right = height.length - 1, best = 0;
    while (left < right) {
      int h = Math.min(height[left], height[right]);
      best = Math.max(best, (right - left) * h);
      if (height[left] < height[right]) {
        left++;
      } else {
        right--;
      }
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input = new int[] { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.maxArea(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
