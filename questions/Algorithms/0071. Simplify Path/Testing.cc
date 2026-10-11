#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  string simplifyPath(string path) {
    vector<string> st;
    stringstream ss(path);
    string tok;
    while (getline(ss, tok, '/')) {
      if (tok == "" || tok == ".") {
        continue;
      }
      if (tok == "..") {
        if (!st.empty()) st.pop_back();
      } else {
        st.push_back(tok);
      }
    }
    string res;
    for (const string &s : st) res += "/" + s;
    return res.empty() ? "/" : res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string input = "/a/./b/../../c/";
  cout << "Input:  " << input << endl;
  Solution solution;
  cout << "Output: " << solution.simplifyPath(input) << endl;
  return EXIT_SUCCESS;
}
