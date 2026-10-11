#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool diffOne(const string &a, const string &b) {
    int diff = 0;
    for (size_t i = 0; i < a.size(); i++) {
      if (a[i] != b[i]) diff++;
    }
    return diff == 1;
  }

public:
  vector<string> findLadders(string beginWord, string endWord, vector<string> &wordList) {
    vector<string> words = {beginWord};
    for (const string &w : wordList) words.push_back(w);
    int n = words.size();
    int endIdx = -1, beginIdx = 0;
    for (int i = 0; i < n; i++) {
      if (words[i] == endWord) endIdx = i;
    }
    if (endIdx == -1) return {};

    vector<int> dist(n, -1), prev(n, -1);
    vector<int> queue = {beginIdx};
    dist[beginIdx] = 0;
    int head = 0, found = -1;
    while (head < (int)queue.size()) {
      int u = queue[head++];
      if (u == endIdx) {
        found = u;
        break;
      }
      for (int v = 0; v < n; v++) {
        if (dist[v] == -1 && diffOne(words[u], words[v])) {
          dist[v] = dist[u] + 1;
          prev[v] = u;
          queue.push_back(v);
        }
      }
    }
    if (found == -1) return {};
    vector<string> res;
    for (int cur = found; cur != -1; cur = prev[cur]) res.push_back(words[cur]);
    reverse(res.begin(), res.end());
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  string beginWord = "hit", endWord = "cog";
  vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
  cout << "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = [\"hot\",\"dot\",\"dog\",\"lot\",\"log\",\"cog\"]" << endl;
  Solution solution;
  vector<string> res = solution.findLadders(beginWord, endWord, wordList);
  cout << "Output: [";
  for (size_t i = 0; i < res.size(); i++) cout << (i == 0 ? "" : ", ") << "\"" << res[i] << "\"";
  cout << "]" << endl;
  return EXIT_SUCCESS;
}
