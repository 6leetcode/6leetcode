import java.util.LinkedHashMap;
import java.util.Map;

// -------------------------------solution begin-------------------------------
class LRUCache {
  private final int capacity;
  private final LinkedHashMap<Integer, Integer> map;

  LRUCache(int capacity) {
    this.capacity = capacity;
    this.map = new LinkedHashMap<Integer, Integer>(capacity, 0.75f, true) {
      @Override
      protected boolean removeEldestEntry(Map.Entry<Integer, Integer> eldest) {
        return size() > LRUCache.this.capacity;
      }
    };
  }

  public int get(int key) {
    Integer value = map.get(key);
    return value == null ? -1 : value;
  }

  public void put(int key, int value) {
    map.put(key, value);
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    LRUCache cache = new LRUCache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    int a1 = cache.get(1);
    cache.put(3, 3);
    int a2 = cache.get(2);
    cache.put(4, 4);
    int a3 = cache.get(1);
    int a4 = cache.get(3);
    int a5 = cache.get(4);
    System.out.println(
        "Input:  [\"LRUCache\",\"put\",\"put\",\"get\",\"put\",\"get\",\"put\",\"get\",\"get\",\"get\"] [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]");
    System.out.printf("Output: [null, null, null, %d, null, %d, null, %d, %d, %d]%n", a1, a2, a3, a4, a5);

    LRUCache cache2 = new LRUCache(1);
    cache2.put(2, 1);
    int b1 = cache2.get(2);
    cache2.put(3, 2);
    int b2 = cache2.get(2);
    int b3 = cache2.get(3);
    System.out.println("Input:  [\"LRUCache\",\"put\",\"get\",\"put\",\"get\",\"get\"] [[1],[2,1],[2],[3,2],[2],[3]]");
    System.out.printf("Output: [null, null, %d, null, %d, %d]%n", b1, b2, b3);
  }
}
