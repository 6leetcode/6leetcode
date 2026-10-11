#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int total = 0;
    int tank = 0;
    int start = 0;

    for (size_t i = 0; i < gas.size(); i++) {
      int diff = gas[i] - cost[i];
      total += diff;
      tank += diff;
      if (tank < 0) {
        start = i + 1;
        tank = 0;
      }
    }

    return total >= 0 ? start : -1;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<int> gas1 = {1, 2, 3, 4, 5};
  vector<int> cost1 = {3, 4, 5, 1, 2};
  cout << "Input:  " << array_show(gas1) << " " << array_show(cost1) << endl;
  cout << "Output: " << solution.canCompleteCircuit(gas1, cost1) << endl;

  vector<int> gas2 = {2, 3, 4};
  vector<int> cost2 = {3, 4, 3};
  cout << "Input:  " << array_show(gas2) << " " << array_show(cost2) << endl;
  cout << "Output: " << solution.canCompleteCircuit(gas2, cost2) << endl;

  return EXIT_SUCCESS;
}
