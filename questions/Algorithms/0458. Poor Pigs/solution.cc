#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
    int times = minutesToTest / minutesToDie;
    int base  = times + 1;
    // base ^ ans >= buckets
    // ans >= log(buckets) / log(base)
    double temp = log(buckets) / log(base);
    int ans     = (int)ceil(temp);
    return ans;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int buckets       = 1000;
  int minutesToDie  = 15;
  int minutesToTest = 1000;
  cout << "Input:  " << buckets << ", " << minutesToDie << ", " << minutesToTest << endl;
  Solution solution;
  cout << "Output: " << solution.poorPigs(buckets, minutesToDie, minutesToTest) << endl;
  return EXIT_SUCCESS;
}
