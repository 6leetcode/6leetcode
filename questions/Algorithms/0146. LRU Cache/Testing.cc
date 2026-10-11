#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class LRUCache {
  int cap;
  list<pair<int, int>> items; // front = LRU, back = MRU
  unordered_map<int, list<pair<int, int>>::iterator> pos;

public:
  LRUCache(int capacity) : cap(capacity) {}

  int get(int key) {
    auto it = pos.find(key);
    if (it == pos.end()) return -1;
    items.splice(items.end(), items, it->second);
    return it->second->second;
  }

  void put(int key, int value) {
    auto it = pos.find(key);
    if (it != pos.end()) {
      it->second->second = value;
      items.splice(items.end(), items, it->second);
      return;
    }
    if ((int)items.size() == cap) {
      pos.erase(items.front().first);
      items.pop_front();
    }
    items.emplace_back(key, value);
    pos[key] = prev(items.end());
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  {
    LRUCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    int a1 = cache.get(1);
    cache.put(3, 3);
    int a2 = cache.get(2);
    cache.put(4, 4);
    int a3 = cache.get(1);
    int a4 = cache.get(3);
    int a5 = cache.get(4);
    cout << "Input:  [\"LRUCache\",\"put\",\"put\",\"get\",\"put\",\"get\",\"put\",\"get\",\"get\",\"get\"] "
            "[[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]"
         << endl;
    cout << "Output: [null, null, null, " << a1 << ", null, " << a2 << ", null, " << a3 << ", " << a4
         << ", " << a5 << "]" << endl;
  }

  {
    LRUCache cache(1);
    cache.put(2, 1);
    int b1 = cache.get(2);
    cache.put(3, 2);
    int b2 = cache.get(2);
    int b3 = cache.get(3);
    cout << "Input:  [\"LRUCache\",\"put\",\"get\",\"put\",\"get\",\"get\"] [[1],[2,1],[2],[3,2],[2],[3]]" << endl;
    cout << "Output: [null, null, " << b1 << ", null, " << b2 << ", " << b3 << "]" << endl;
  }

  return EXIT_SUCCESS;
}
