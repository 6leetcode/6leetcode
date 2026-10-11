#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  int largest(vector<int> &heights) {
    int n = heights.size(), maxArea = 0;
    stack<int> st;
    for (int i = 0; i <= n; i++) {
      int h = (i == n) ? 0 : heights[i];
      while (!st.empty() && heights[st.top()] > h) {
        int height = heights[st.top()];
        st.pop();
        int width = st.empty() ? i : i - st.top() - 1;
        maxArea = max(maxArea, height * width);
      }
      st.push(i);
    }
    return maxArea;
  }

public:
  int maximalRectangle(vector<vector<char>> &matrix) {
    if (matrix.empty()) return 0;
    int n = matrix[0].size(), maxArea = 0;
    vector<int> heights(n, 0);
    for (int i = 0; i < (int)matrix.size(); i++) {
      for (int j = 0; j < n; j++) {
        heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
      }
      maxArea = max(maxArea, largest(heights));
    }
    return maxArea;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<char>> input = {{'1', '0', '1', '0', '0'},
                                {'1', '0', '1', '1', '1'},
                                {'1', '1', '1', '1', '1'},
                                {'1', '0', '0', '1', '0'}};
  cout << "Input:  [[1, 0, 1, 0, 0], [1, 0, 1, 1, 1], [1, 1, 1, 1, 1], [1, 0, 0, 1, 0]]" << endl;
  Solution solution;
  cout << "Output: " << solution.maximalRectangle(input) << endl;
  return EXIT_SUCCESS;
}
