#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<string> findLongestSubarray(vector<string> &array) {
    unordered_map<int, int> first;
    first[0] = -1;
    int sum = 0, bestLen = 0, bestStart = 0;
    for (int i = 0; i < (int)array.size(); i++) {
      char c = array[i][0];
      sum += (c >= '0' && c <= '9') ? -1 : 1;
      if (first.count(sum)) {
        int len = i - first[sum];
        if (len > bestLen) {
          bestLen = len;
          bestStart = first[sum] + 1;
        }
      } else {
        first[sum] = i;
      }
    }
    return vector<string>(array.begin() + bestStart, array.begin() + bestStart + bestLen);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> array = {"A", "1", "B", "C", "D", "2", "3", "4", "E", "5", "F", "G", "6", "7", "H", "I", "J", "K", "L", "M"};
  cout << "Input:  [\"A\",\"1\",\"B\",\"C\",\"D\",\"2\",\"3\",\"4\",\"E\",\"5\",\"F\",\"G\",\"6\",\"7\",\"H\",\"I\",\"J\",\"K\",\"L\",\"M\"]" << endl;
  Solution solution;
  vector<string> res = solution.findLongestSubarray(array);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
