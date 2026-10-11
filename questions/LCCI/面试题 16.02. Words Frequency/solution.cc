#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class WordsFrequency {
  unordered_map<string, int> freq;

public:
  WordsFrequency(vector<string> &book) {
    for (const string &w : book) freq[w]++;
  }
  int get(string word) { return freq.count(word) ? freq[word] : 0; }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<string> book = {"i", "have", "an", "apple", "he", "have", "a", "pen"};
  cout << "Input:  book = [i, have, an, apple, he, have, a, pen]" << endl;
  WordsFrequency obj(book);
  cout << "Output: [" << obj.get("you") << ", " << obj.get("have") << ", " << obj.get("an") << ", "
       << obj.get("apple") << ", " << obj.get("pen") << "]" << endl;
  return EXIT_SUCCESS;
}
