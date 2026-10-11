import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  public int[][] kClosest(int[][] points, int K) {
    Arrays.sort(points, (a, b) -> (a[0] * a[0] + a[1] * a[1]) - (b[0] * b[0] + b[1] * b[1]));
    return Arrays.copyOfRange(points, 0, K);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] input1 = { { 3, 3 }, { 5, -1 }, { -2, 4 } };
    int input2 = 2;
    System.out.printf("Input:  %s %d\n", Arrays.deepToString(input1), input2);
    Solution solution = new Solution();
    System.out.println("Output: " + Arrays.deepToString(solution.kClosest(input1, input2)));
  }
}
