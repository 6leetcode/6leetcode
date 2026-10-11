import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    int[] merged = new int[nums1.length + nums2.length];
    System.arraycopy(nums1, 0, merged, 0, nums1.length);
    System.arraycopy(nums2, 0, merged, nums1.length, nums2.length);
    Arrays.sort(merged);

    int length = merged.length;
    if (length % 2 == 0) {
      return (merged[length / 2 - 1] + merged[length / 2]) / 2.0;
    }
    return merged[length / 2];
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] input1 = new int[] { 1, 3 };
    int[] input2 = new int[] { 2 };
    System.out.printf("Input:  %s, %s\n", ArrayShowInteger(input1), ArrayShowInteger(input2));

    Solution solution = new Solution();
    System.out.printf("Output: %f\n", solution.findMedianSortedArrays(input1, input2));
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
}
