#include <iostream>
#include <stack>
#include <vector>

#include <cc/array.hpp>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int largestRectangleArea(vector<int> &heights) {
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
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<int> input = {2, 1, 5, 6, 2, 3};
  cout << "Input:  " << array_show(input) << endl;
  Solution solution;
  cout << "Output: " << solution.largestRectangleArea(input) << endl;
  return EXIT_SUCCESS;
}
