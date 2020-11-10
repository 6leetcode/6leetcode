#include <array>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int countPrimes(int n) {
    bool *isPrim = new bool[n];
    memset(isPrim, true, n);
    for (int i = 2; i * i < n; i++) {
      if (isPrim[i]) {
        for (int j = i * i; j < n; j += i)
          isPrim[j] = false;
      }
    }
    int count = 0;
    for (int i = 2; i < n; i++)
      if (isPrim[i]) count++;
    delete[] isPrim;
    return count;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int input = 10;
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.countPrimes(10) << endl;
  return EXIT_SUCCESS;
}
