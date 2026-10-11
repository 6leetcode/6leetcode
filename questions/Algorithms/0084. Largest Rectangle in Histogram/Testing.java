import java.util.ArrayDeque;
import java.util.Deque;

// -------------------------------solution begin-------------------------------
class Solution {
  public int largestRectangleArea(int[] heights) {
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
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[] input = { 2, 1, 5, 6, 2, 3 };
    System.out.println("Input:  " + ArrayShowInteger(input));
    Solution solution = new Solution();
    System.out.println("Output: " + solution.largestRectangleArea(input));
  }

  public static String ArrayShowInteger(int[] arr) {
    String res = "[";
    for (int i = 0; i < arr.length; i++) {
      res += (i == 0 ? "" : ", ") + Integer.toString(arr[i]);
    }
    return res + "]";
  }
}
