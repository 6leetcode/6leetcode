// -------------------------------solution begin-------------------------------
class Solution {
  public int trap(int[] height) {
    int l = 0, r = height.length - 1;
    int lmax = 0, rmax = 0, res = 0;
    while (l < r) {
      if (height[l] < height[r]) {
        if (height[l] >= lmax) {
          lmax = height[l];
        } else {
          res += lmax - height[l];
        }
        l++;
      } else {
        if (height[r] >= rmax) {
          rmax = height[r];
        } else {
          res += rmax - height[r];
        }
        r--;
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.trap(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
