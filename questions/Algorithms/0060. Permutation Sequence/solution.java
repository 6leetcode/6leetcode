import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  public String getPermutation(int n, int k) {
    int[] fact = new int[n + 1];
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;
    List<Integer> nums = new ArrayList<>();
    for (int i = 1; i <= n; i++) nums.add(i);
    StringBuilder sb = new StringBuilder();
    k--;
    for (int i = n; i >= 1; i--) {
      int idx = k / fact[i - 1];
      sb.append(nums.remove(idx));
      k %= fact[i - 1];
    }
    return sb.toString();
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int n = 3, k = 3;
    System.out.println("Input:  " + n + " " + k);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.getPermutation(n, k));
  }
}
