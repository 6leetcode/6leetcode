import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int pileBox(int[][] box) {
    Arrays.sort(box, (a, b) -> a[0] != b[0] ? a[0] - b[0] : (a[1] != b[1] ? a[1] - b[1] : a[2] - b[2]));
    int n = box.length, best = 0;
    int[] dp = new int[n];
    for (int i = 0; i < n; i++) {
      dp[i] = box[i][2];
      for (int j = 0; j < i; j++) {
        if (box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2]) {
          dp[i] = Math.max(dp[i], dp[j] + box[i][2]);
        }
      }
      best = Math.max(best, dp[i]);
    }
    return best;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int[][] box = { { 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 } };
    System.out.println("Input:  [[1,1,1],[2,2,2],[3,3,3]]");
    System.out.println("Output: " + new Solution().pileBox(box));
  }
}
