#include <algorithm>
#include <iostream>
#include <vector>

#include <matrix.hpp>

using namespace std;

class Solution {
public:
  vector<vector<int>> kClosest(vector<vector<int>> &points, int K) {
    nth_element(points.begin(), points.begin() + K, points.end(),
                [](vector<int> &p, vector<int> &q) {
                  return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
                });
    return vector<vector<int>>(points.begin(), points.begin() + K);
  }

  static bool f(vector<int> p1, vector<int> p2) {
    return p1[0] * p1[0] + p1[1] * p1[1] < p2[0] * p2[0] + p2[1] * p2[1];
  }
};

int main(int argc, char const *argv[]) {
  vector<vector<int>> input1 = {{3, 3}, {5, -1}, {-2, 4}};
  int input2 = 2;
  cout << "Input:  " << matrix_show(input1) << endl;
  Solution solution;
  cout << "Output: " << matrix_show(solution.kClosest(input1, input2)) << endl;
  return 0;
}
