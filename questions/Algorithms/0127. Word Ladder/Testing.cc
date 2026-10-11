#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
public:
  int ladderLength(string beginWord, string endWord, vector<string> &wordList) {
    unordered_set<string> dict(wordList.begin(), wordList.end());
    if (!dict.count(endWord)) return 0;

    queue<string> q;
    q.push(beginWord);
    int level = 1;

    while (!q.empty()) {
      int size = q.size();
      for (int i = 0; i < size; i++) {
        string word = q.front();
        q.pop();
        if (word == endWord) return level;
        for (size_t j = 0; j < word.size(); j++) {
          char origin = word[j];
          for (char c = 'a'; c <= 'z'; c++) {
            if (c == origin) continue;
            word[j] = c;
            if (dict.count(word)) {
              q.push(word);
              dict.erase(word);
            }
          }
          word[j] = origin;
        }
      }
      level++;
    }

    return 0;
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

int main(int argc, char const *argv[]) {
  Solution solution;

  vector<string> list1 = {"hot", "dot", "dog", "lot", "log", "cog"};
  vector<string> list2 = {"hot", "dot", "dog", "lot", "log"};
  vector<string> list3 = {"hot", "dog", "dot"};

  cout << "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " << showWords(list1) << endl;
  cout << "Output: " << solution.ladderLength("hit", "cog", list1) << endl;

  cout << "Input:  beginWord = \"hit\", endWord = \"cog\", wordList = " << showWords(list2) << endl;
  cout << "Output: " << solution.ladderLength("hit", "cog", list2) << endl;

  cout << "Input:  beginWord = \"hot\", endWord = \"dog\", wordList = " << showWords(list3) << endl;
  cout << "Output: " << solution.ladderLength("hot", "dog", list3) << endl;

  return EXIT_SUCCESS;
}
