import java.util.HashSet;
import java.util.Set;

// -------------------------------solution begin-------------------------------
class Solution {
  public String[] printKMoves(int K) {
    int[] dr = { 0, 1, 0, -1 };
    int[] dc = { 1, 0, -1, 0 };
    int dir = 0, r = 0, c = 0;
    Set<String> black = new HashSet<>();
    Set<String> visited = new HashSet<>();
    visited.add("0,0");
    for (int k = 0; k < K; k++) {
      String p = r + "," + c;
      if (!black.contains(p)) {
        black.add(p);
        dir = (dir + 1) % 4;
      } else {
        black.remove(p);
        dir = (dir + 3) % 4;
      }
      r += dr[dir];
      c += dc[dir];
      visited.add(r + "," + c);
    }
    int minR = 0, maxR = 0, minC = 0, maxC = 0;
    for (String p : visited) {
      String[] parts = p.split(",");
      int pr = Integer.parseInt(parts[0]);
      int pc = Integer.parseInt(parts[1]);
      minR = Math.min(minR, pr);
      maxR = Math.max(maxR, pr);
      minC = Math.min(minC, pc);
      maxC = Math.max(maxC, pc);
    }
    String letters = "RDLU";
    String[] res = new String[maxR - minR + 1];
    for (int i = minR; i <= maxR; i++) {
      StringBuilder row = new StringBuilder();
      for (int j = minC; j <= maxC; j++) {
        if (i == r && j == c) {
          row.append(letters.charAt(dir));
        } else if (black.contains(i + "," + j)) {
          row.append('X');
        } else {
          row.append('_');
        }
      }
      res[i - minR] = row.toString();
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    int K = 0;
    System.out.println("Input:  " + K);
    System.out.println("Output: " + java.util.Arrays.toString(new Solution().printKMoves(K)));
  }
}
