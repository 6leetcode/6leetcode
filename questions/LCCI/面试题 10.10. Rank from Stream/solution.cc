#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class StreamRank {
  vector<int> data;

public:
  StreamRank() {}
  void track(int x) {
    data.insert(upper_bound(data.begin(), data.end(), x), x);
  }
  int getRankOfNumber(int x) {
    return upper_bound(data.begin(), data.end(), x) - data.begin();
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  [\"StreamRank\", \"getRankOfNumber\", \"track\", \"getRankOfNumber\"], [[], [1], [0], [0]]" << endl;
  StreamRank obj;
  int a = obj.getRankOfNumber(1);
  obj.track(0);
  int b = obj.getRankOfNumber(0);
  cout << "Output: [null, " << a << ", null, " << b << "]" << endl;
  return EXIT_SUCCESS;
}
