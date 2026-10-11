#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

// ------------------------------- solution begin -------------------------------
class LRUCache {
  int capacity;
  list<pair<int, int>> items;
  unordered_map<int, list<pair<int, int>>::iterator> map;

public:
  LRUCache(int capacity) : capacity(capacity) {}

  int get(int key) {
    auto it = map.find(key);
    if (it == map.end()) return -1;
    items.splice(items.begin(), items, it->second);
    return it->second->second;
  }

  void put(int key, int value) {
    auto it = map.find(key);
    if (it != map.end()) {
      it->second->second = value;
      items.splice(items.begin(), items, it->second);
      return;
    }
    if ((int)items.size() == capacity) {
      int evict = items.back().first;
      items.pop_back();
      map.erase(evict);
    }
    items.push_front({key, value});
    map[key] = items.begin();
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  LRUCache(2), put(1,1), put(2,2), get(1), put(3,3), get(2), put(4,4), get(1), get(3), get(4)" << endl;
  LRUCache cache(2);
  cache.put(1, 1);
  cache.put(2, 2);
  int a = cache.get(1);
  cache.put(3, 3);
  int b = cache.get(2);
  cache.put(4, 4);
  int c = cache.get(1);
  int d = cache.get(3);
  int e = cache.get(4);
  cout << "Output: [" << a << ", " << b << ", " << c << ", " << d << ", " << e << "]" << endl;
  return EXIT_SUCCESS;
}
