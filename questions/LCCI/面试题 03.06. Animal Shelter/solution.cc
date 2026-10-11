#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class AnimalShelf {
  queue<pair<int, int>> cats;
  queue<pair<int, int>> dogs;
  int order = 0;

public:
  AnimalShelf() {}
  void enqueue(vector<int> animal) {
    if (animal[1] == 0) {
      cats.push({animal[0], order++});
    } else {
      dogs.push({animal[0], order++});
    }
  }
  vector<int> dequeueAny() {
    if (cats.empty() && dogs.empty()) return {-1, -1};
    if (dogs.empty() || (!cats.empty() && cats.front().second < dogs.front().second)) {
      vector<int> res = {cats.front().first, 0};
      cats.pop();
      return res;
    }
    vector<int> res = {dogs.front().first, 1};
    dogs.pop();
    return res;
  }
  vector<int> dequeueDog() {
    if (dogs.empty()) return {-1, -1};
    vector<int> res = {dogs.front().first, 1};
    dogs.pop();
    return res;
  }
  vector<int> dequeueCat() {
    if (cats.empty()) return {-1, -1};
    vector<int> res = {cats.front().first, 0};
    cats.pop();
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"AnimalShelf\", \"enqueue\", \"enqueue\", \"enqueue\", \"dequeueDog\", \"dequeueCat\", \"dequeueAny\"]" << endl;
  AnimalShelf obj;
  obj.enqueue({0, 0});
  obj.enqueue({1, 0});
  obj.enqueue({2, 1});
  vector<int> r1 = obj.dequeueDog();
  vector<int> r2 = obj.dequeueCat();
  vector<int> r3 = obj.dequeueAny();
  cout << "Output: [null, null, null, null, [" << r1[0] << "," << r1[1] << "], [" << r2[0] << "," << r2[1]
       << "], [" << r3[0] << "," << r3[1] << "]]" << endl;
  return EXIT_SUCCESS;
}
