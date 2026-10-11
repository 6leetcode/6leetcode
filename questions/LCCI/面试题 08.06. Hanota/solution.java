import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class Solution {
  private void hanoi(List<Integer> src, List<Integer> aux, List<Integer> dst, int n) {
    if (n == 0) return;
    hanoi(src, dst, aux, n - 1);
    dst.add(src.remove(src.size() - 1));
    hanoi(aux, src, dst, n - 1);
  }

  public void hanota(List<Integer> A, List<Integer> B, List<Integer> C) {
    hanoi(A, B, C, A.size());
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    List<Integer> A = new ArrayList<>(List.of(2, 1, 0));
    List<Integer> B = new ArrayList<>();
    List<Integer> C = new ArrayList<>();
    System.out.println("Input:  A = [2, 1, 0], B = [], C = []");
    new Solution().hanota(A, B, C);
    System.out.println("Output: C = " + C);
  }
}
