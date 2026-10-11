#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1, 1);
    for (int i = 1; i <= rowIndex; i++) {
      for (int j = i - 1; j >= 1; j--) {
        row[j] += row[j - 1];
      }
    }
    return row;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> cases = {3, 0, 1, 4};
  Solution solution;

  for (int index : cases) {
    vector<int> output = solution.getRow(index);
    cout << "Input:  " << index << endl;
    cout << "Output: " << array_show(output) << endl;
  }

  return EXIT_SUCCESS;
}
