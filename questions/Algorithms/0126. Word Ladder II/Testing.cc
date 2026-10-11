#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  unordered_map<string, vector<string>> parents;
  unordered_set<string> dict;

  void dfs(const string &word, const string &beginWord, vector<string> &path,
           vector<vector<string>> &res) {
    if (word == beginWord) {
      vector<string> r(path.rbegin(), path.rend());
      res.push_back(r);
      return;
    }
    for (const string &p : parents[word]) {
      path.push_back(p);
      dfs(p, beginWord, path, res);
      path.pop_back();
    }
  }

public:
  vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList) {
    vector<vector<string>> res;
    dict = unordered_set<string>(wordList.begin(), wordList.end());
    parents.clear();
    if (!dict.count(endWord)) return res;

    unordered_set<string> visited;
    visited.insert(beginWord);
    vector<string> level = {beginWord};
    bool found = false;

    while (!level.empty() && !found) {
      vector<string> next;
      unordered_set<string> nextSet;
      for (const string &word : level) {
        string w = word;
        for (size_t j = 0; j < w.size(); j++) {
          char origin = w[j];
          for (char c = 'a'; c <= 'z'; c++) {
            if (c == origin) continue;
            w[j] = c;
            if (dict.count(w) && !visited.count(w)) {
              if (nextSet.insert(w).second) next.push_back(w);
              parents[w].push_back(word);
              if (w == endWord) found = true;
            }
          }
          w[j] = origin;
        }
      }
      for (const string &w : next) visited.insert(w);
      level = next;
    }

    if (!found) return res;

    vector<string> path = {endWord};
    dfs(endWord, beginWord, path, res);
    return res;
  }
};
// ------------------------------- solution end ---------------------------------

static string showWords(const vector<string> &list) {
  string r = "[";
  for (size_t i = 0; i < list.size(); i++) {
    if (i) r += ", ";
    r += "\"" + list[i] + "\"";
  }
  return r + "]";
}

static string showPaths(const vector<vector<string>> &paths) {
  string r = "[";
  for (size_t i = 0; i < paths.size(); i++) {
    if (i) r += ", ";
    r += "[";
    for (size_t j = 0; j < paths[i].size(); j++) {
      if (j) r += ", ";
      r += "\"" + paths[i][j] + "\"";
    }
    r += "]";
  }
  return r + "]";
}

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<string> list1 = {"hot", "dot", "dog", "lot", "log", "cog"};
  vector<string> list2 = {"hot", "dot", "dog", "lot", "log"};

  cout << "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " << showWords(list1) << endl;
  cout << "Output: " << showPaths(solution.findLadders("hit", "cog", list1)) << endl;

  cout << "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " << showWords(list2) << endl;
  cout << "Output: " << showPaths(solution.findLadders("hit", "cog", list2)) << endl;

  return EXIT_SUCCESS;
}
