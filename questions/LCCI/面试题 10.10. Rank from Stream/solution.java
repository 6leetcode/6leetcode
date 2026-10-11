import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class StreamRank {
  private List<Integer> data = new ArrayList<>();

  public StreamRank() {}

  public void track(int x) {
    int lo = 0, hi = data.size();
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      if (data.get(mid) <= x) lo = mid + 1;
      else hi = mid;
    }
    data.add(lo, x);
  }

  public int getRankOfNumber(int x) {
    int lo = 0, hi = data.size();
    while (lo < hi) {
      int mid = lo + (hi - lo) / 2;
      if (data.get(mid) <= x) lo = mid + 1;
      else hi = mid;
    }
    return lo;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    System.out.println("Input:  [\"StreamRank\", \"getRankOfNumber\", \"track\", \"getRankOfNumber\"], [[], [1], [0], [0]]");
    StreamRank obj = new StreamRank();
    int a = obj.getRankOfNumber(1);
    obj.track(0);
    int b = obj.getRankOfNumber(0);
    System.out.printf("Output: [null, %d, null, %d]\n", a, b);
  }
}
