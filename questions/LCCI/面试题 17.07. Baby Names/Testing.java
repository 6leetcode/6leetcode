import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

// -------------------------------solution begin-------------------------------
class Solution {
  private Map<String, String> parent = new HashMap<>();

  private String find(String x) {
    parent.putIfAbsent(x, x);
    if (!parent.get(x).equals(x)) parent.put(x, find(parent.get(x)));
    return parent.get(x);
  }

  private void union(String a, String b) {
    String ra = find(a), rb = find(b);
    if (ra.equals(rb)) return;
    if (ra.compareTo(rb) < 0) parent.put(rb, ra);
    else parent.put(ra, rb);
  }

  public String[] trulyMostPopular(String[] names, String[] synonyms) {
    Map<String, Integer> freq = new HashMap<>();
    for (String s : names) {
      int pos = s.indexOf('(');
      String name = s.substring(0, pos);
      int cnt = Integer.parseInt(s.substring(pos + 1, s.length() - 1));
      freq.put(name, cnt);
      find(name);
    }
    for (String s : synonyms) {
      String[] parts = s.substring(1, s.length() - 1).split(",");
      union(parts[0], parts[1]);
    }
    Map<String, Integer> agg = new TreeMap<>();
    for (Map.Entry<String, Integer> e : freq.entrySet()) {
      String r = find(e.getKey());
      agg.put(r, agg.getOrDefault(r, 0) + e.getValue());
    }
    List<String> res = new ArrayList<>();
    for (Map.Entry<String, Integer> e : agg.entrySet()) {
      res.add(e.getKey() + "(" + e.getValue() + ")");
    }
    return res.toArray(new String[0]);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    String[] names = { "John(15)", "Jon(12)", "Chris(13)", "Kris(4)", "Christopher(19)" };
    String[] synonyms = { "(Jon,John)", "(John,Johnny)", "(Chris,Kris)", "(Chris,Christopher)" };
    System.out.println("Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]");
    System.out.println("Output: " + java.util.Arrays.toString(new Solution().trulyMostPopular(names, synonyms)));
  }
}
