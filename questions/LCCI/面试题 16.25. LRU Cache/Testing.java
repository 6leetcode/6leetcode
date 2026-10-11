import java.util.LinkedHashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class LRUCache {
  private int capacity;
  private LinkedHashMap<Integer, Integer> map;

  public LRUCache(int capacity) {
    this.capacity = capacity;
    this.map = new LinkedHashMap<>(capacity, 0.75f, true);
  }

  public int get(int key) {
    return map.getOrDefault(key, -1);
  }

  public void put(int key, int value) {
    map.put(key, value);
    if (map.size() > capacity) {
      Integer eldest = map.keySet().iterator().next();
      map.remove(eldest);
    }
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    System.out.println("Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)");
    LRUCache cache = new LRUCache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    int a = cache.get(1);
    cache.put(3, 3);
    int b = cache.get(2);
    cache.put(4, 4);
    int c = cache.get(1);
    int d = cache.get(3);
    int e = cache.get(4);
    System.out.printf("Output: [%d, %d, %d, %d, %d]\n", a, b, c, d, e);
  }
}
