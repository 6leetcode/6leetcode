#include <iostream>
#include <vector>

#include <matrix.hpp>
#include <vector.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
      return {};
    }

    int rows = matrix.size(), columns = matrix[0].size();
    vector<int> order;
    int left = 0, right = columns - 1, top = 0, bottom = rows - 1;
    while (left <= right && top <= bottom) {
      for (int column = left; column <= right; column++) {
        order.push_back(matrix[top][column]);
      }
      for (int row = top + 1; row <= bottom; row++) {
        order.push_back(matrix[row][right]);
      }
      if (left < right && top < bottom) {
        for (int column = right - 1; column > left; column--) {
          order.push_back(matrix[bottom][column]);
        }
        for (int row = bottom; row > top; row--) {
          order.push_back(matrix[row][left]);
        }
      }
      left++;
      right--;
      top++;
      bottom--;
    }
    return order;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> input = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << "Input:  " << matrix_show(input) << endl;
  Solution solution;
  cout << "Output: " << vector_show(solution.spiralOrder(input)) << endl;
  return EXIT_SUCCESS;
}
