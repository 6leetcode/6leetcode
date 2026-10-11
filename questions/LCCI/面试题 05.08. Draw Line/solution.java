import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[] drawLine(int length, int w, int x1, int x2, int y) {
    int[] res = new int[length];
    int perRow = w / 32;
    for (int x = x1; x <= x2; x++) {
      int group = y * perRow + x / 32;
      int bit = 31 - (x % 32);
      res[group] |= (1 << bit);
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int length = 1, w = 32, x1 = 30, x2 = 31, y = 0;
    System.out.println("Input:  length = 1, w = 32, x1 = 30, x2 = 31, y = 0");
    System.out.println("Output: " + Arrays.toString(new Solution().drawLine(length, w, x1, x2, y)));
  }
}
