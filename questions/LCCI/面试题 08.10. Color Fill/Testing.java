import java.util.Arrays;

// -------------------------------solution begin-------------------------------
class Solution {
  private void dfs(int[][] image, int r, int c, int oldColor, int newColor) {
    if (r < 0 || r >= image.length || c < 0 || c >= image[0].length || image[r][c] != oldColor) return;
    image[r][c] = newColor;
    dfs(image, r + 1, c, oldColor, newColor);
    dfs(image, r - 1, c, oldColor, newColor);
    dfs(image, r, c + 1, oldColor, newColor);
    dfs(image, r, c - 1, oldColor, newColor);
  }

  public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
    int oldColor = image[sr][sc];
    if (oldColor != newColor) dfs(image, sr, sc, oldColor, newColor);
    return image;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int[][] image = { { 1, 1, 1 }, { 1, 1, 0 }, { 1, 0, 1 } };
    System.out.println("Input:  [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2");
    int[][] res = new Solution().floodFill(image, 1, 1, 2);
    System.out.println("Output: " + Arrays.deepToString(res));
  }
}
