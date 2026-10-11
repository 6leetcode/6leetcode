import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public void merge(int[] nums1, int m, int[] nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0) {
      if (i >= 0 && nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
      } else {
        nums1[k--] = nums2[j--];
      }
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input1 = { 1, 2, 3, 0, 0, 0 };
    int[] input2 = { 2, 5, 6 };
    int m = 3, n = 3;
    System.out.printf("Input:  %s %d %s %d\n", Arrays.toString(input1), m, Arrays.toString(input2), n);
    new Solution().merge(input1, m, input2, n);
    System.out.println("Output: " + Arrays.toString(input1));
  }
}
