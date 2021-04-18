#include <iostream>
#include <vector>

#include <cc/array.hpp>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> input = {1, 2, 3, 4, 5};
  cout << "Output: " << array_show(input) << endl;
  return EXIT_SUCCESS;
}
