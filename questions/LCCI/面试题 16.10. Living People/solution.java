import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int maxAliveYear(int[] birth, int[] death) {
    int[] delta = new int[102];
    for (int i = 0; i < birth.length; i++) {
      delta[birth[i] - 1900]++;
      delta[death[i] - 1900 + 1]--;
    }
    int best = 0, cur = 0, bestYear = 1900;
    for (int i = 0; i <= 100; i++) {
      cur += delta[i];
      if (cur > best) {
        best = cur;
        bestYear = 1900 + i;
      }
    }
    return bestYear;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[] birth = { 1900, 1901, 1950 };
    int[] death = { 1948, 1951, 2000 };
    System.out.printf("Input:  birth = %s, death = %s\n", Arrays.toString(birth), Arrays.toString(death));
    System.out.println("Output: " + new Solution().maxAliveYear(birth, death));
  }
}
