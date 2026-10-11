#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  string root(map<string, string> &parent, map<string, int> &rank, string x) {
    if (parent.find(x) == parent.end()) {
      parent[x] = x;
      rank[x] = 0;
    }
    if (parent[x] != x) parent[x] = root(parent, rank, parent[x]);
    return parent[x];
  }

  void unite(map<string, string> &parent, map<string, int> &rank, string a, string b) {
    string ra = root(parent, rank, a), rb = root(parent, rank, b);
    if (ra == rb) return;
    if (ra < rb) {
      parent[rb] = ra;
    } else {
      parent[ra] = rb;
    }
  }

public:
  vector<string> trulyMostPopular(vector<string> &names, vector<string> &synonyms) {
    map<string, string> parent;
    map<string, int> rank;
    map<string, int> freq;
    for (const string &s : names) {
      auto pos = s.find('(');
      string name = s.substr(0, pos);
      int cnt = stoi(s.substr(pos + 1, s.size() - pos - 2));
      freq[name] = cnt;
      root(parent, rank, name);
    }
    for (const string &s : synonyms) {
      auto pos = s.find(',');
      string a = s.substr(1, pos - 1);
      string b = s.substr(pos + 1, s.size() - pos - 2);
      unite(parent, rank, a, b);
    }
    map<string, int> agg;
    for (auto &kv : freq) {
      agg[root(parent, rank, kv.first)] += kv.second;
    }
    vector<string> res;
    for (auto &kv : agg) res.push_back(kv.first + "(" + to_string(kv.second) + ")");
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> names = {"John(15)", "Jon(12)", "Chris(13)", "Kris(4)", "Christopher(19)"};
  vector<string> synonyms = {"(Jon,John)", "(John,Johnny)", "(Chris,Kris)", "(Chris,Christopher)"};
  cout << "Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]" << endl;
  Solution solution;
  vector<string> res = solution.trulyMostPopular(names, synonyms);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
