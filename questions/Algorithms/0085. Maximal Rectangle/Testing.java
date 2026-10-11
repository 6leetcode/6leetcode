import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class Solution {
  private int largest(int[] heights) {
    int n = heights.length, maxArea = 0;
    Deque<Integer> st = new ArrayDeque<>();
    for (int i = 0; i <= n; i++) {
      int h = (i == n) ? 0 : heights[i];
      while (!st.isEmpty() && heights[st.peek()] > h) {
        int height = heights[st.pop()];
        int width = st.isEmpty() ? i : i - st.peek() - 1;
        maxArea = Math.max(maxArea, height * width);
      }
      st.push(i);
    }
    return maxArea;
  }

  public int maximalRectangle(char[][] matrix) {
    if (matrix.length == 0) return 0;
    int n = matrix[0].length, maxArea = 0;
    int[] heights = new int[n];
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < n; j++) {
        heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
      }
      maxArea = Math.max(maxArea, largest(heights));
    }
    return maxArea;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    char[][] input = {
        { '1', '0', '1', '0', '0' },
        { '1', '0', '1', '1', '1' },
        { '1', '1', '1', '1', '1' },
        { '1', '0', '0', '1', '0' },
    };
    System.out.println("Input:  [[1, 0, 1, 0, 0], [1, 0, 1, 1, 1], [1, 1, 1, 1, 1], [1, 0, 0, 1, 0]]");
    Solution solution = new Solution();
    System.out.println("Output: " + solution.maximalRectangle(input));
  }
}
