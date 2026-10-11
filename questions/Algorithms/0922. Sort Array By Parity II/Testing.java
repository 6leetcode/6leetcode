import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] sortArrayByParityII(int[] A) {
    int n = A.length;
    int[] ans = new int[n];
    int i = 0;
    for (int x : A) {
      if (x % 2 == 0) {
        ans[i] = x;
        i += 2;
      }
    }
    i = 1;
    for (int x : A) {
      if (x % 2 == 1) {
        ans[i] = x;
        i += 2;
      }
    }
    return ans;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 4, 2, 5, 7 };
    System.out.println("Input:  " + Arrays.toString(input));
    Solution solution = new Solution();
    System.out.println("Output: " + Arrays.toString(solution.sortArrayByParityII(input)));
  }
}
