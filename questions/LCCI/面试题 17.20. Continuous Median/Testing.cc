#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class MedianFinder {
  priority_queue<int> lower;
  priority_queue<int, vector<int>, greater<int>> upper;

public:
  MedianFinder() {}
  void addNum(int num) {
    lower.push(num);
    upper.push(lower.top());
    lower.pop();
    if (lower.size() < upper.size()) {
      lower.push(upper.top());
      upper.pop();
    }
  }
  double findMedian() {
    if (lower.size() > upper.size()) return lower.top();
    return (lower.top() + upper.top()) / 2.0;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  cout << "Input:  addNum(1), addNum(2), findMedian(), addNum(3), findMedian()" << endl;
  MedianFinder obj;
  obj.addNum(1);
  obj.addNum(2);
  double a = obj.findMedian();
  obj.addNum(3);
  double b = obj.findMedian();
  cout << "Output: [" << a << ", " << b << "]" << endl;
  return EXIT_SUCCESS;
}
