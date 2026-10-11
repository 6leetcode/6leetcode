#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool dfs(vector<vector<char>> &board, int i, int j, string &word, int idx) {
    if (idx == (int)word.size()) return true;
    if (i < 0 || i >= (int)board.size() || j < 0 || j >= (int)board[0].size() || board[i][j] != word[idx]) {
      return false;
    }
    char tmp = board[i][j];
    board[i][j] = '#';
    bool found = dfs(board, i + 1, j, word, idx + 1) || dfs(board, i - 1, j, word, idx + 1) ||
                 dfs(board, i, j + 1, word, idx + 1) || dfs(board, i, j - 1, word, idx + 1);
    board[i][j] = tmp;
    return found;
  }

public:
  bool exist(vector<vector<char>> &board, string word) {
    for (int i = 0; i < (int)board.size(); i++) {
      for (int j = 0; j < (int)board[0].size(); j++) {
        if (dfs(board, i, j, word, 0)) return true;
      }
    }
    return false;
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  string word = "ABCCED";
  cout << "Input:  [[A, B, C, E], [S, F, C, S], [A, D, E, E]] " << word << endl;
  Solution solution;
  cout << "Output: " << (solution.exist(board, word) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
